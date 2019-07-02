#include "TH1F.h"
#include "TH2.h"
#include "TF1.h"
#include "TStyle.h"
#include "TGaxis.h"
#include "TCanvas.h"
#include "TLine.h"
#include "TEventList.h"
#include "TRatioPlot.h"
#include <TMath.h>
#include "THStack.h"
#include "TGraphAsymmErrors.h"
#include <iostream>
#include <fstream>
#include <stdio.h>

void Gdata() {
 gStyle->SetOptStat(0);
//Open root files. Here you can open one or more root files
TFile *h1 = TFile::Open("/PATH/FOR/YOUR/ROOTFILES/ROOTFILE.root");
TFile *h2 = TFile::Open("/PATH/FOR/YOUR/ROOTFILES/ROOTFILE.root");

TFile *h5 = TFile::Open("/PATH/FOR/YOUR/ROOTFILES/ROOTFILE.root");
TFile *h6 = TFile::Open("/PATH/FOR/YOUR/ROOTFILES/ROOTFILE.root");

TFile *h3 = TFile::Open("/PATH/FOR/YOUR/ROOTFILES/ROOTFILEoot");
TFile *h4 = TFile::Open("/PATH/FOR/YOUR/ROOTFILES/ROOTFILEoot");

//Create and read Histograms from root file
TH1F *hist1 = (TH1F*)data->Get("Hist1D_y2");

TH1F *Raa1 = (TH1F*)h1->Get("name_of_your_histogram");//XeXe
TH1F *Raa2 = (TH1F*)h2->Get("name_of_your_histogram");

TH1F *Raa3 = (TH1F*)h3->Get("name_of_your_histogram");
TH1F *Raa4 = (TH1F*)h4->Get("name_of_your_histogram");

TH1F *Raa5 = (TH1F*)h5->Get("name_of_your_histogram");
TH1F *Raa6 = (TH1F*)h6->Get("name_of_your_histogram");




//Create a Canvas for plot your histogram
TCanvas *cc = new TCanvas("cc","Data",500,10,800,600);
cc->SetGrid();

hist1->SetTitle(" D0 meson R_{AA} - PbPb - #sqrt{S_{NN}} = 5.02TeV with TRENTO");
hist1->SetYTitle("R_{AA}");
hist1->SetXTitle("p_{T}(GeV)");
hist1->GetYaxis()->SetRangeUser(0,1.6);
// E3A for draw graph_data
// hist1->SetFillColor(36);
hist1->SetMarkerStyle(21);
hist1->SetLineWidth(2);
hist1->Draw("PLC");

Raa1->SetMarkerStyle(1);
// Raa1->SetMarkerColor(21);
Raa1->SetLineWidth(4);
Raa1->SetLineColor(21);
Raa1->SetFillColor(21);
Raa1->Draw("CP SAME");

Raa2->SetMarkerStyle(1);
Raa2->SetMarkerColor(26);
Raa2->SetMarkerSize(10);
Raa2->SetLineWidth(4);
Raa2->SetFillColor(26);
Raa2->Draw(" CP SAME");
// Raa2->SetMarkerColor(6);



Raa3->SetMarkerStyle(1);
Raa3->SetLineColor(38);
Raa3->SetLineWidth(3);
// Raa3->SetMarkerColor(28);
Raa3->SetFillColor(18);
// Raa3->Draw("L");
Raa3->Draw("CP SAME");

Raa4->SetMarkerStyle(1);
Raa4->SetLineColor(28);
Raa4->SetLineWidth(3);
// Raa4->SetMarkerColor(28);
Raa4->SetFillColor(28);
// Raa4->Draw("L");
Raa4->Draw("CP SAME");

Raa5->SetMarkerStyle(1);
Raa5->SetLineColor(8);
Raa5->SetLineWidth(3);
// Raa5->SetMarkerColor(28);
Raa5->SetFillColor(48);
// Raa5->Draw("L");
Raa5->Draw("CP SAME");

Raa6->SetMarkerStyle(1);
Raa6->SetLineColor(39);
Raa6->SetLineWidth(3);
// Raa6->SetMarkerColor(28);
Raa6->SetFillColor(28);
// Raa6->Draw("L");
Raa6->Draw("CP SAME");


TLegend *leg=new TLegend(0.615,0.65,0.956,0.905);
   leg->AddEntry(hist1,"CMS ","fp");
   leg->AddEntry(Raa1,"Xe legend of your histogram","lp");
   leg->AddEntry(Raa2,"X legend of your histogram","lp");
   leg->AddEntry(Raa3," legend of your histogram","lp");
   leg->AddEntry(Raa4," legend of your histogram","lp");
   leg->AddEntry(Raa5,"Ar legend of your histogram","lp");
   leg->AddEntry(Raa6,"Ar legend of your histogram","lp");
   leg->SetTextFont(132);
   leg->SetHeader("R_{AA}");
   leg->SetTextFont(42);
   leg->Draw();

   TLatex *t1 = new TLatex();
   t1->SetNDC();
   t1->SetTextAlign(22);
   t1->SetTextFont(63);
   t1->SetTextSizePixels(22);
   t1->DrawLatex(0.25,.77,"CMS  0-10%; |y|<1");
// cc->cd(2);

// v2->Draw();
//graph_data. SetMarkerStyle(0);
//graph_data.SetFillColor(0);
//graph_data.GetXaxis()->SetRangeUser(0,30);
//graph_data.Draw("E3AL");


}
