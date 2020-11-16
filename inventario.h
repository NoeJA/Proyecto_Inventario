#ifndef INVENTARIO_H
#define INVENTARIO_H
#include<string>

class inventario
{
	public:
		();
	void AddArticle(vector<string> articleVec,string article);
		void DelArticle(string article);
		int setAmount(vector<int> nArticles,int amount);
		void setCost(vector<float> Cost,float cost);
		void setSell(vector<float> Sell,float cost_sell );
		void printInv(vector<> inventario, int lenInv);
		float calcGain;
		
		
	private:
		vector<string> articleVec;
		vector<int> nArticles;
		vector<float> Cost;
		vector<float> Sell;
};

#endif
