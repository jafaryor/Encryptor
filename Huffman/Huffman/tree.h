#pragma once

using namespace System;
using namespace System::Text::RegularExpressions;

namespace Huffman
{

	public ref class Node
	{
	public:
		Int64 frequency;
		String^ Symbol;
		Node^ left;
		Node^ right;
		Char left_weight;
		Char right_weight;

		Node(): 
			frequency(0), Symbol(gcnew String("")), left(nullptr), right(nullptr), left_weight('#'), right_weight('#') {}
		Node(String^ sym, Int64 freq, Node^ l, Node^ r, Char l_w, Char r_w):
		   frequency(freq), left(l), right(r), left_weight(l_w), right_weight(r_w) {Symbol += sym;}

		virtual String^ ToString() override
		{
			return "Symbol = " + Symbol + "\n" +
				"Frequency = " + frequency + "\n" +
				"Left Weight = " + left_weight + "\n" +
				"Right Weight = " + right_weight + "\n";
		}
	};


	public ref class Tree : Node
	{
	private:
		initonly Node^ root;
		Node^ curr;

	public:
		Tree(): root(nullptr), curr(nullptr) {}
		Tree(array<Char>^ Symbols, array<Int64>^ Frequencies)
		{
			Int32 i;
			array<Node^>^ freeNodes = gcnew array<Node^>(Symbols->Length);
			for(i=0; i<freeNodes->Length; i++)
				freeNodes[i] = gcnew Node(Convert::ToString(Symbols[i]), Frequencies[i], nullptr, nullptr, '#', '#');
			
			Node^ min1,^ min2,^ newNode;
			Int32 min1_index, min2_index;
			while(freeNodes->Length > 1)
			{
				min1_index = FindMin(freeNodes);
				min1 = freeNodes[min1_index];
				min2_index = FindMinExcept(min1_index, freeNodes);
				min2 = freeNodes[min2_index];
				newNode = gcnew Node(min1->Symbol + min2->Symbol, min1->frequency + min2->frequency, min1, min2, '#', '#');
				
				freeNodes[min1_index < min2_index ? min1_index : min2_index] = newNode;
				freeNodes[min1_index > min2_index ? min1_index : min2_index] = freeNodes[freeNodes->Length-1];

				Array::Resize(freeNodes, freeNodes->Length-1);
			}
			curr = root = freeNodes[0];
			freeNodes = nullptr;
		}

		property Node^ Root
		{
			Node^ get() {return root;}
		}

		Int32 FindMin(array<Node^>^ arr)
		{
			Int32 min_index(0);
			for(Int32 i=1; i<arr->Length; i++)
			{
				if(arr[i]->frequency < arr[min_index]->frequency) min_index = i;
			}
			return min_index;
		}

		Int32 FindMinExcept(Int32 min_index1, array<Node^>^ arr)
		{
			Int32 min_index2(min_index1 != 0? 0 : 1);
			for(Int32 i=0; i<arr->Length; i++)
			{
				if(i==min_index1) continue;
				if(arr[i]->frequency < arr[min_index2]->frequency) min_index2 = i;
			}
			return min_index2;
		}

		void Encode(Node^ current)
		{
			if(current->left == nullptr || current->right == nullptr) return;
			Random ran;
			current->left_weight = ran.Next(2) == 0 ? '0' : '1';
			current->right_weight = (current->left_weight == '1' ? '0' : '1');
			Encode(current->left);
			Encode(current->right);
		}
		
		String^ FindCode(Char ch)
		{
			if(root->left == nullptr || root->right == nullptr) return "0";	//in case when text->lenght == 1
			String^ Code = gcnew String("");
			curr = root;

			while(curr->left != nullptr || curr->right != nullptr)
			{
				if(curr->left->Symbol->IndexOf(ch) >= 0)
				{
					Code += curr->left_weight;
					curr = curr->left;
				}
				else
				{
					Code += curr->right_weight;
					curr = curr->right;
				}
			}
			return Code;
		}


		Char FindSymbol(String^ code)
		{
			if(String::IsNullOrEmpty(code)) return '#';
			curr = root;
			
			for(Int32 i=0; i<code->Length; i++)
			{
				if(curr->left_weight == code[i]) curr = curr->left;
				else curr = curr->right;
			}

			if(curr->Symbol->Length == 1) return Convert::ToChar(curr->Symbol);
			else return '#';
		}


		String^ Show(Node^ current)
		{
			if(current->left != nullptr && current->right != nullptr)
				return current->ToString() + "\n" + Show(current->left) + "\n" + Show(current->right) + "\n";

			return current->ToString();
		}

		virtual String^ ToString() override {return Show(root);}

	};

}