void Logtest(){
gStyle->SetOptStat(0);

TFile *h1 = TFile::Open("/home/lucas/Documentos/Raa0-10_v2_v3/MT.150.XeXe.vnanalysis.root");
TFile *h2 = TFile::Open("/home/lucas/Documentos/Raa0-10_v2_v3/MT.150.XeXedef.vnanalysis.root");


TH1F *Raa1 = (TH1F*)h1->Get("dmeson/0-20/RAA:diff");//XeXe
TH1F *Raa2 = (TH1F*)h2->Get("dmeson/0-20/RAA:diff");
TH1F *Raa3 = (TH1F*)h1->Get("dmeson/0-20/RAA:diff");
TH1F *Raa4 = (TH1F*)h2->Get("dmeson/0-20/RAA:diff");

TCanvas *cc = new TCanvas("cc","Data",500,10,800,600);
// cc->Divide(2,1);
cc->SetGrid();
// cc->cd(1);
// cc->SetLogx();
// cc->SetLogy();


Raa1->SetMarkerStyle(1);
Raa1->GetXaxis()->SetRange(0-10,50);
Raa1->SetLineWidth(4);
Raa1->SetLineColor(21);
Raa1->SetFillColor(21);
Raa1->Draw("CP");

Raa2->SetMarkerStyle(1);
Raa2->SetMarkerColor(25);
Raa2->SetMarkerSize(10);
Raa2->SetLineWidth(4);
Raa2->SetFillColor(25);
Raa2->Draw(" CP SAME");





}
