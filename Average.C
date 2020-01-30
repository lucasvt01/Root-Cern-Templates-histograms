#include <vector>
#include "TFile.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TProfile.h"

void average(){

  //for (i=0,i < 8, i++)
 TFile *root1 = TFile::Open("/home/lucas/Documentos/Mestrado/coaltimetest/MT.150/ArAr.11900.root");
 TFile *root2 = TFile::Open("/home/lucas/Documentos/Mestrado/coaltimetest/MT.150/ArAr.9997.root");
 TFile *root3 = TFile::Open("/home/lucas/Documentos/Mestrado/coaltimetest/MT.150/ArAr.9992.root");
 TFile *root4 = TFile::Open("/home/lucas/Documentos/Mestrado/coaltimetest/MT.150/ArAr.9994.root");
 // TFile *root4 = TFile::Open("/home/lucas/Documentos/Mestrado/coaltimetest/MT.150/rootcoal.root");

// for (int i=1;i<=5;++i){

 TH1F *hist1 = (TH1F*)root1->FindObjectAny("number of coal quarks;1");
 TH1F *hist2 = (TH1F*)root2->FindObjectAny("number of coal quarks;1");
 TH1F *hist3 = (TH1F*)root3->FindObjectAny("number of coal quarks;1");
 TH1F *hist4 = (TH1F*)root4->FindObjectAny("number of coal quarks;1");

// std::vector<TH1F*> hists;
// for (int i=0;i<4;i++) {
//       TH1F *hIndv = (TH1F*)f->Get(Form("number of coal quarks",i));
//       if (hIndv)
//          hists.push_back(hIndv);
//    }
// hists->push_back(hist1,hist2,hist3,hist4);

//
// auto sum_h= new TH1F(*hist1);
// sum_h->Add(hist2,1);
// sum_h->Add(hist3,1);
// sum_h->Add(hist4,1);

// sum_h->SetTitle("Soma");


// format_h(sum_h,kBlue);
//Compute average
// TH1F *hAvg = Average(sum_h);
// TProfile *hProf = hAvg->ProfileX("hProf");

TCanvas *cc = new TCanvas("cc","Data",100,10,1000,500);

cc->Divide(1,2);
cc->cd(1);
// sum_h->Draw("CP");
// sum_h->DrawNormalized("CP");
// dividend->Draw("CP same");
// hAvg->Draw("CP same ");

// hist1->SetMarkerColor(35);
// hist1->SetLineColor(40);
// hist1->Draw("CP same");
// TProfile *prof = hist1->ProfileX();

auto sum = new TH1F(*hist1);
sum->Add(hist2);
sum->Add(hist3);
sum->Add(hist4);
// sum->Add(hist3);
// sum->Scale(1.0/4);
// TH1F *h = (TH1F*)hist1->Clone("h");
// h->Reset();
// h->Merge(list);
// h->Draw();
// hist1->SetBit(TH1::kIsAverage);
sum->Draw();

cc->cd(2);
// hist2->SetBit(TH1::kIsAverage);
hist1->Draw("same");
hist2->Draw("same");
hist3->Draw("same");
hist4->Draw("same");
// prof->Draw("same");

}
// }
