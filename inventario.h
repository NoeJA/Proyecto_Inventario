#ifndef CAPITAL_H
#define CAPITAL_H
#include<string>

class inventario
{
	public:
		();
	void AddArticle(string article);
		void DelArticle(string article);
		int setAmount(int amount);
		void setCost(float cost);
		void setSell(float cost_sell );
		void printInv(vector<> inventario, int lenInv);
		float calcGain;
		
		
	private:
		vector<string> articleVec;
		vector<int> nArticles;
		vector<float> Cost;
		vector<float> Sell;
};

#endif
