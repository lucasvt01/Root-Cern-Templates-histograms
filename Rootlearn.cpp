#include "TH1F.h"
#include "TH2.h"
#include "TF1.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TLine.h"
#include "TEventList.h"
#include "TRatioPlot.h"
#include "TMath.h"
#include <iostream>
#include <fstream>
#include "TGraph.h"

void testratio() {
 //Open ROOT files
 TFile *h1 = TFile::Open("/home/vinci/Documentos/MT.160_c.LHC2AnalysisQM_vn4vn2ratio_trento.root");
 //Read your histograms
 TH1F *hist1 = (TH1F*)h1->Get("dmeson/0-10/Cumulants:v2{2}:diff");
 TH1F *hist2 = (TH1F*)h1->Get("dmeson/0-10/Cumulants:v2{4}:diff");

//define histograms
//auto gaus_h1 = new TH1F("v4/v2","pr",100,0,50);

 //Define a canvas

 TCanvas *cc = new TCanvas("cc", "v2{2}, v2{4} and ratio", 1000, 1000);
 cc->Divide(2,2);
 //Draw the 3 Pion Mass histograms
 cc->cd(1);
 hist1->SetTitle("v2{2}-ArAr");
 hist1->GetXaxis()->SetTitle("p_{T}");
 hist1->Draw("C");
 cc->cd(2);
 hist2->SetTitle("v2{4}-ArAr");
 hist2->GetXaxis()->SetTitle("p_{T}");
 hist2->Draw("C");
 //cc->Divide(2,1);
 //cc->cd(3);
 //cc->Draw();
//auto rp = new TRatioPlot(hist2, hist1);
//cc->SetTicks(0, 1);
//rp->Draw();
//rp->GetLowYaxis()->SetNdivisions(505);
//cc->Update();
 //cc-> TRatioPlot(hist2,hist1);
 //TH1F *rp = (TH1F*)h1->Clone();
 //cc->cd(3);
 //rp->Draw();
 //rp->Divide(hist2);
 //cc->cd(4);
 //locHist_ratio->SaveAs("fileOutName.root");
 //rp->Draw();
 //rp ->SaveAs("/home/vinci/Documentos/fileOutName.root");

auto dividend = new TH1F(*hist1);
cc->cd(3);
dividend->Divide(hist2);
//dividend->Fit("landaun");
dividend->SetTitle("v2{4}/v2{2}");
dividend->GetYaxis()->SetTitle("v2{4}/v2{2}");
dividend->GetXaxis()->SetTitle("p_{T}");
//->Rebin(100);
dividend->GetXaxis()->SetRange(0,100);
//dividend->GetYaxis()->SetRange(-100,100);
//dividend->SetLogy();
//cc->GetPad(3)->SetRightMargin(0.1);
dividend->Draw("CR");
dividend->SaveAs("/home/vinci/Documentos/ratio.root");

//TCanvas* c_divide= new TCanvas();
//c_divide->Divide(1,2,0,0);
//c_divide->cd(1);
//c_divide->GetPad(1)->SetRightMargin(.01);
//hist1->DrawNormalized("Hist");
//hist2->DrawNormalized("HistSame");

 //Take their ratio and draw it
 //TH1F *Hist_ratio = (TH1F*)h1->Clone();
 //cc->cd(3);
 //Hist_ratio->Draw();
 //Hist_ratio->Divide(h2);
 //cc->cd(4);
 //Hist_ratio->SaveAs("fileOutName.root"); // nao tenho certeza tenta ->save("fileOutName.root")
}
