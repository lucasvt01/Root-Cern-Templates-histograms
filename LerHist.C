#include "TH1F.h"
void testratio() {
  //Open ROOT files
  TFile *h1 = TFile::Open("arquivo.root");
  //Read your histograms
  TH1F *hist1 = (TH1*)h1->Get("YOURHIST1");
  TH1F *hist2 = (TH1*)h1->Get("YOURHIST2");

  //Define a canvas
  TCanvas *cc = new TCanvas("cc", "cc", 600, 600);
  cc->Divide(2,2);

  //Draw the 3 Pion Mass histograms
  cc->cd(1);
  h1->Draw();
  cc->cd(2);
  h2->Draw();

  //Take their ratio and draw it
  TH1F *Hist_ratio = (TH1F*)h1->Clone();
  cc->cd(3);
  locHist_ratio->Draw();
  locHist_ratio->Divide(h2);
  cc->cd(4);
  locHist_ratio->SaveAs("fileOutName.root"); // nao tenho certeza tenta ->save("fileOutName.root")
}
