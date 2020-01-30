#include "TH1.h"
#include "TCanvas.h"
#include "TGraph.h"

void h12asciii (TH1* v2);

void r(){
//Don'tshow entries and others stuffs
// gStyle->SetOptStat(0);
// gPad->DrawFrame(0,0.,100.,0.2);
 gStyle->SetOptStat(kFALSE);
 // gPad->SetTickx();
 // gPad->SetTicky();
//Open roots files
// TFile *v2data = TFile::Open("/home/lucas/Documentos/0-10%/CMS_PbPb_V2_D0_0-10_HEPData-ins1615780-v1-Table_1.root");
// TFile *v2data = TFile::Open("/home/lucas/Documentos/0-10%/HEPData-ins1616207-raa-0-10-Table_1.root");
TFile *v2data = TFile::Open("/home/lucas/Documentos/0-10%/PbPb_cms_D0_Raa_0-10_HEPData-ins1616207-v1-Table_1.root");
// TFile *v3data = TFile::Open("/home/lucas/Documentos/0-10%/CMSv3.root");


// TFile *h1 = TFile::Open("/home/lucas/Documentos/30-50%/MT.PbPb.160.PbPb.3050.new.vnanalysis.root");
// TFile *h2 = TFile::Open("/home/lucas/Documentos/30-50%/MT.160.ArAr.30-50.trento.vnanalysisnew.root");
// TFile *h3 = TFile::Open("/home/lucas/Documentos/30-50%/MT.160.PbPb.30-50.trento.nocoal.vnanalysis.root");
// TFile *h4 = TFile::Open("/home/lucas/Documentos/30-50%/MT.160.XeXedef.30-50.trento.vnanalysisnew.root");
// TFile *h1 = TFile::Open("/home/lucas/Documentos/0-10%/MT.160.OO.vnanalysis.root");
// TFile *h3 = TFile::Open("/home/lucas/Documentos/OO-150until160/MT.150.OO.vnanalysis.root");
// TFile *h5 = TFile::Open("/home/lucas/Documentos/OO-150until160/MT.150.OO.vnanalysis.root");
// TFile *h6 = TFile::Open("/home/lucas/Documentos/OO-150until160/MT.160.OO.vnanalysis.root");
// TFile *h6 = TFile::Open("/home/lucas/Documentos/Raa0-10_v2_v3/MT.150.PbPb.vnanalysis.root");
TFile *h1 = TFile::Open("/home/lucas/Documentos/0-10%/const.160.PbPb.010.neww.vnanalysis.root");
TFile *h2 = TFile::Open("/home/lucas/Documentos/0-10%/Scan_size/MT.150.ArAr.new.vnanalysis.root");
// TFile *h2 = TFile::Open("/home/lucas/Documentos/0-10%//MT.160.ArAr.vnanalysis.root");
// TFile *h3 = TFile::Open("/home/lucas/Documentos/0-10%/PBG.150.PbPb.vnanalysis.root");
// TFile *h4 = TFile::Open("/home/lucas/Documentos/0-10%/const.160.vnanalysisnew.root");
// // TFile *h5 = TFile::Open("/home/lucas/Documentos/0-10%/TT.PbPb.160.vnanalysis.root");
// TFile *h5 = TFile::Open("/home/lucas/Documentos/0-10%/TT.160.vnanalysis.PbPb010new.root");

// TFile *h9 = TFile::Open("/home/lucas/Documentos/Raa0-10_v2_v3/MT.160.ArAr.vnanalysis.root");

//Get the histograms
// TH1F *v2 = (TH1F*)v2data->Get("Table 1/Hist1D_y2");
TGraph *v2g = (TGraph*)v2data->Get("Table 1/Graph1D_y2");
// TH1F *v2f = (TH1F*)v2data->Get("Table 1/Hist1D_y1");
// TH1F *v3 = (TH1F*)v3data->Get("Graph1D_y1");


// TH1F *hist1 = (TH1F*)h1->Get("dmeson/30-50/Profile:v3:(8.00-13.00)");
// TH1F *hist17 = (TH1F*)h1->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
// TH1F *hist2 = (TH1F*)h2->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
//
// TH1F *hist3 = (TH1F*)h3->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
// TH1F *hist4 = (TH1F*)h4->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
//
// TH1F *hist5 = (TH1F*)h5->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
// TH1F *hist6 = (TH1F*)h6->Get("dmeson/0-20/Cumulants:v2{2}:diff");
//
// TH1F *hist7 = (TH1F*)h7->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
// TH1F *hist8 = (TH1F*)h8->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
// TH1F *hist9 = (TH1F*)h9->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");
//
TH1F *hist1 = (TH1F*)h1->Get("dmeson/0-20/Cumulants:v3{2}:diff");
// TH1F *hist11= (TH1F*)h2->Get("dmeson/0-20/Cumulants:v2{2}:diff");
// TH1F *hist13= (TH1F*)h1->Get("dmeson/0-20/Cumulants:v2{2}:diff");
// TH1F *hist14 = (TH1F*)h4->Get("dmeson/0-20/Cumulants:v3{2}:diff");
// TH1F *hist1 = (TH1F*)h1->Get("dmeson/30-50/RAA:diff");
// // TH1F *hist17 = (TH1F*)h1->Get("dmeson/30-50/RAA:diff");
// TH1F *hist2 = (TH1F*)h2->Get("dmeson/30-50/RAA:diff");
// TH1F *hist1 = (TH1F*)h1->Get("dmeson/0-20/RAA:diff");
TH1F *hist2 = (TH1F*)h2->Get("dmeson/0-20/RAA:diff");
// TH1F *hist5 = (TH1F*)h5->Get("dmeson/0-20/RAA:diff");

// TH1F *hist7 = (TH1F*)h3->Get("dmeson/0-20/Cumulants:v2{4}:diff");
// Double_t xAxis1[101] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
// hist1->RebinAxis(100,xAxis1);;
// v2->Rebin(99,"new");
// TH1F *hnew = new TH1F("hnew","rebinned",100,xbins);
// for(i=0,i<hnew,)

// TH1D *new = dynamic_cast<TH1D*>(v2->Rebin(99,"neww"));
//Create Canvas

TCanvas *cc = new TCanvas("raa","Data",100,10,1000,500);
gPad->  SetTickx();
gPad->  SetTicky();
TH1 *frame = gPad->DrawFrame(1.,0.,100.,1.5);
frame->SetTitle("D0 meson R_{AA} - MT Model with TRENTO PbPb - 5.02TeV");
frame->SetTitleFont(132);
frame->SetLabelFont(132);
frame->GetXaxis()->SetTitle("p_{T}(GeV)");
frame->GetXaxis()->CenterTitle(true);
frame->GetXaxis()->SetLabelFont(42);
frame->GetXaxis()->SetLabelSize(0.03);
frame->GetXaxis()->SetTitleSize(0.05);
frame->GetXaxis()->SetTitleOffset(0.85);
frame->GetXaxis()->SetTitleFont(132);
frame->GetYaxis()->SetTitle("R_{AA}");
frame->GetYaxis()->CenterTitle(true);
frame->GetYaxis()->SetLabelFont(42);
frame->GetYaxis()->SetLabelSize(0.035);
frame->GetYaxis()->SetTitleSize(0.05);
frame->GetYaxis()->SetTitleFont(132);
frame->GetZaxis()->SetLabelFont(42);
frame->GetZaxis()->SetLabelSize(0.035);
frame->GetZaxis()->SetTitleSize(0.035);
frame->GetZaxis()->SetTitleOffset(1);
frame->GetZaxis()->SetTitleFont(132);
// frame->GetXaxis()->SetLabelSize(5.2323);
  // frame->GetXaxis()->SetTitle("p_{T}(GeV)");
  // frame->GetYaxis()->SetTitle("R_{AA}");
  // frame->GetYaxis()->SetFont(13);
  // frame->SetTitle("D0 meson R_{AA} - MT Model Frag & Coal  with TRENTO");
  // frame->GetXaxis()->SetTitleOffset(1);
  // frame->GetYaxis()->SetTitleSize(80);
 // TPad *pad3 = new TPad("pad3","pad3",100,10,1000,500,0);
 // pad3->Draw();
cc->SetLogx();
// cc->Range(-5.475001,-0.1037141,49.275,0.1673285);
// cc->SetMargin(0.,0.07,0.165,0.1);
// cc->SetFrameBorderMode(0);
// cc->SetFrameBorderMode(0);
// cc->SetBorderMode(0);
// cc->SetBorderSize(2);
// pad3->cd();
// pad3->SetLogx();
// pad3->GetXaxis();
// cc->Divide(2,1);
// cc->cd(1);
// gPad->SetTickx(2);
// hist1->SetTitleFont(67);

// hist1->GetYaxis()->SetTitleOffset(0);

// v2->SetTitle(" D0 meson v2{2} - PbPb #sqrt{S_{NN}} = 5.02TeV with TRENTO");
// // v2->SetXTitle("p_{T}(GeV)");
// // v2->SetYTitle("v2_{2}");
// v2->SetMarkerStyle(21);
// v2->SetMarkerColor(4);
// v2->SetFillColor(4);
// v2->SetLineWidth(1);
// // v2->SetLineW(2);
// // v2->GetXaxis()->SetLimits(1.48,50.);
// v2g->GetXaxis()->SetTitle("p_{T}(GeV)");
// v2g->SetTitle("D0 meson v_{2}{2} - MT Model Frag & Coal  with TRENTO");
// v2g->GetXaxis()->SetTitleSize(0.04);
// v2g->GetYaxis()->SetTitle("v_{2}{2}");
// v2g->GetYaxis()->SetTitleSize(0.04);
// v2g->GetYaxis()->SetTitleOffset(1);
// v2g->GetXaxis()->SetLabelSize(0.03);
// v2g->GetYaxis()->SetLabelSize(0.03);
// // v2g->GetYaxis()->SetLimits(0,0.14);
// // v2g->GetXaxis()->SetLimits(0,40);
v2g->SetLineWidth(3);
v2g->SetLineColor(kGray+3);
v2g->Draw("same");//"C" 	A smooth Curve is drawn ,
// new->Draw("same");//"C" 	A smooth Curve is drawn ,
// hnew->Draw("same ");//"C" 	A smooth Curve is drawn ,
// h->Scale(1/norm);
///#########SOLUÇÂO para pegar as simulações
auto t1 = new TTree();
t1->ReadFile("/home/lucas/Documentos/0-10%/MT.160.PbPb.Raa.160.new.txt","a:b");
t1->SetLineColor(kGreen);
t1->SetLineWidth(3);
t1->Draw("b:a", "","c same");

auto t2 = new TTree();
t2->ReadFile("/home/lucas/Documentos/0-10%/PBG.160.PbPb.010.Raa.new.vnanalysis.txt","a:b");
t2->SetLineColor(kGreen+3);
t2->SetLineWidth(3);
t2->Draw("b:a", "","c same");

auto t3 = new TTree();
t3->ReadFile("/home/lucas/Documentos/0-10%/const/const.160.new.Raa010_dmeson.txt","a:b");
t3->SetLineColor(kBlue-7);
t3->SetLineWidth(3);
t3->Draw("b:a", "","c same");

auto t4 = new TTree();
t4->ReadFile("/home/lucas/Documentos/0-10%/TT.160.PbPb.010.raa.new.txt","a:b");
t4->SetLineColor(kRed);
t4->SetLineWidth(3);
// t4->SetLineStyle(9);
t4->Draw("b:a", "","l same");

// auto t5 = new TTree();
// t5->ReadFile("/home/lucas/Documentos/0-10%/MT.160.PbPb.raa.new0515.txt","a:b");
// // t5->ReadFile("/home/lucas/Documentos/30-50%/MT.160.PbPb.30-50.trento.vnanalysisnew.txt","a:b");
// t5->SetLineColor(1);
// t5->SetLineWidth(3);
// // t5->SetLineStyle(9);
// t5->Draw("b:a", "","l same");

// Double_t normh = hist1->GetEntries();
// Double_t norm = 1;
// Double_t scale = norm/(hist1->Integral());
// v2->Scale(scale);
// v2->Draw("same ");
// v2->Draw("destep>>hEven","!(pid%2)");
// hEven = (TH1F*)gDirectory->Get("hEven");//"C" 	A smooth Curve is drawn ,
// v2->Draw("destep>>hOdd","(pid%2)");
// hOdd = (TH1F*)gDirectory->Get("hOdd");
// hEven->Scale(1./hEven->Integral());
// hOdd ->Scale(1./hOdd ->Integral());
// TH1D *hDiff = new TH1D("RatioHist", "v_{2}{4}/v_{2}{2}", 100, 0, 100);
// hDiff = Add(hEven);
// hDiff->Add(hOdd,-1);
// hDiff->Draw();

//
// hist1->SetMarkerStyle(28);
// hist1->SetFillColor(0);
// hist1->SetYTitle("v3{2}");
// hist1->SetXTitle("p_{T}(GeV)");
// hist1->GetXaxis()->SetLabelSize(0.05);
// hist1->GetYaxis()->SetLabelSize(0.05);
// hist1->SetMarkerColor(35);
// hist1->SetLineWidth(3);
// hist1->SetLineStyle(9);
// // hist1->GetXaxis()->SetLimits(0.,50.);
// // hist1->Rebin(500);
// hist1->SetTitle(" D0 meson v_{3}{2} - MT Model Frag & Coal  with TRENTO");

// hist1->SetTitle(" D0 0-10% - MT Model Frag & Coal  with TRENTO");
// hist1->SetXTitle("v_{2}^{soft}");
// hist1->SetYTitle("v_{2}^{heavy}(8 #leq p_{T} #leq 13(GeV))");
// // hist1->GetYaxis()->SetLimits(0.03,0.1);
// hist1->GetYaxis()->SetLabelOffset(0.01);
// // hist1->GetXaxis()->SetRangeUser(0,50);
// // hist1->GetXaxis()->SetRange(0,40);
// // hist1->GetYaxis()->SetLimits(0.,0.01);
// // hist1->GetXaxis()->SetLimits(0.,0.15);
// // hist1->GetYaxis()->SetLimits(0,0.14);
// // hist1->GetXaxis()->SetLimits(0,50);
// // hist1->Rebin
// // hist1->Add(v2);
// hist1->Draw("same");

// Double_t xAxis7[101] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
//
// TH1D *pbpb150 = new TH1D("pbpb150","",100, xAxis7);
// pbpb150->SetBinContent(1,0.7018431);
// pbpb150->SetBinContent(2,1.005646);
// pbpb150->SetBinContent(3,0.9232146);
// pbpb150->SetBinContent(4,0.5463059);
// pbpb150->SetBinContent(5,0.2820872);
// pbpb150->SetBinContent(6,0.1752935);
// pbpb150->SetBinContent(7,0.1431599);
// pbpb150->SetBinContent(8,0.1382442);
// pbpb150->SetBinContent(9,0.1421121);
// pbpb150->SetBinContent(10,0.1496408);
// pbpb150->SetBinContent(11,0.1588144);
// pbpb150->SetBinContent(12,0.1688089);
// pbpb150->SetBinContent(13,0.1794555);
// pbpb150->SetBinContent(14,0.1903586);
// pbpb150->SetBinContent(15,0.2014415);
// pbpb150->SetBinContent(16,0.2127403);
// pbpb150->SetBinContent(17,0.2239308);
// pbpb150->SetBinContent(18,0.2351212);
// pbpb150->SetBinContent(19,0.2460459);
// pbpb150->SetBinContent(20,0.2568244);
// pbpb150->SetBinContent(21,0.2677184);
// pbpb150->SetBinContent(22,0.2781522);
// pbpb150->SetBinContent(23,0.2887112);
// pbpb150->SetBinContent(24,0.2987295);
// pbpb150->SetBinContent(25,0.3085948);
// pbpb150->SetBinContent(26,0.3180712);
// pbpb150->SetBinContent(27,0.3272738);
// pbpb150->SetBinContent(28,0.3364598);
// pbpb150->SetBinContent(29,0.3453838);
// pbpb150->SetBinContent(30,0.3542774);
// pbpb150->SetBinContent(31,0.3627527);
// pbpb150->SetBinContent(32,0.3710531);
// pbpb150->SetBinContent(33,0.3790855);
// pbpb150->SetBinContent(34,0.3871497);
// pbpb150->SetBinContent(35,0.394643);
// pbpb150->SetBinContent(36,0.4022717);
// pbpb150->SetBinContent(37,0.4096055);
// pbpb150->SetBinContent(38,0.4167303);
// pbpb150->SetBinContent(39,0.4236071);
// pbpb150->SetBinContent(40,0.4303925);
// pbpb150->SetBinContent(41,0.4369831);
// pbpb150->SetBinContent(42,0.443656);
// pbpb150->SetBinContent(43,0.4499365);
// pbpb150->SetBinContent(44,0.4559402);
// pbpb150->SetBinContent(45,0.4621537);
// pbpb150->SetBinContent(46,0.4678329);
// pbpb150->SetBinContent(47,0.4737289);
// pbpb150->SetBinContent(48,0.4793628);
// pbpb150->SetBinContent(49,0.4850087);
// pbpb150->SetBinContent(50,0.4901756);
// pbpb150->SetBinContent(51,0.4954822);
// pbpb150->SetBinContent(52,0.5006028);
// pbpb150->SetBinContent(53,0.505583);
// pbpb150->SetBinContent(54,0.5101082);
// pbpb150->SetBinContent(55,0.5148481);
// pbpb150->SetBinContent(56,0.5198617);
// pbpb150->SetBinContent(57,0.5246923);
// pbpb150->SetBinContent(58,0.5289343);
// pbpb150->SetBinContent(59,0.5334499);
// pbpb150->SetBinContent(60,0.5377701);
// pbpb150->SetBinContent(61,0.5418846);
// pbpb150->SetBinContent(62,0.5460146);
// pbpb150->SetBinContent(63,0.5502246);
// pbpb150->SetBinContent(64,0.5538453);
// pbpb150->SetBinContent(65,0.5579244);
// pbpb150->SetBinContent(66,0.5617288);
// pbpb150->SetBinContent(67,0.5656921);
// pbpb150->SetBinContent(68,0.5693875);
// pbpb150->SetBinContent(69,0.5728642);
// pbpb150->SetBinContent(70,0.5762315);
// pbpb150->SetBinContent(71,0.5797162);
// pbpb150->SetBinContent(72,0.5833027);
// pbpb150->SetBinContent(73,0.5866133);
// pbpb150->SetBinContent(74,0.5899839);
// pbpb150->SetBinContent(75,0.5931017);
// pbpb150->SetBinContent(76,0.5961271);
// pbpb150->SetBinContent(77,0.5995551);
// pbpb150->SetBinContent(78,0.6027474);
// pbpb150->SetBinContent(79,0.6056299);
// pbpb150->SetBinContent(80,0.6085277);
// pbpb150->SetBinContent(81,0.6114734);
// pbpb150->SetBinContent(82,0.6143344);
// pbpb150->SetBinContent(83,0.6169421);
// pbpb150->SetBinContent(84,0.6200166);
// pbpb150->SetBinContent(85,0.6227102);
// pbpb150->SetBinContent(86,0.625471);
// pbpb150->SetBinContent(87,0.6281602);
// pbpb150->SetBinContent(88,0.6307181);
// pbpb150->SetBinContent(89,0.6330042);
// pbpb150->SetBinContent(90,0.6356694);
// pbpb150->SetBinContent(91,0.6380065);
// pbpb150->SetBinContent(92,0.640374);
// pbpb150->SetBinContent(93,0.6428419);
// pbpb150->SetBinContent(94,0.6453374);
// pbpb150->SetBinContent(95,0.6475242);
// pbpb150->SetBinContent(96,0.6498389);
// pbpb150->SetBinContent(97,0.652021);
// pbpb150->SetBinContent(98,0.6542568);
// pbpb150->SetBinContent(99,0.656463);
// pbpb150->SetBinContent(100,0.658667);
// pbpb150->SetEntries(6649538);
// pbpb150->SetLineWidth(3);
// pbpb150->SetLineColor(1);
// pbpb150->SetTitle("D0 meson, 0-10%, R_{AA} CMS - #sqrt{s_{NN}}=5.02TeV");
// pbpb150->GetXaxis()->SetTitle("p_{T}(GeV)");
// pbpb150->GetYaxis()->SetTitle("R_{AA}");
// pbpb150->GetYaxis()->SetRangeUser(0.,1.2);
// pbpb150->GetXaxis()->SetLabelFont(42);
// pbpb150->GetXaxis()->SetLabelSize(0.035);
// pbpb150->GetXaxis()->SetTitleSize(0.035);
// pbpb150->GetXaxis()->SetTitleOffset(1);
// pbpb150->GetXaxis()->SetTitleFont(42);
// pbpb150->GetYaxis()->SetLabelFont(42);
// pbpb150->GetYaxis()->SetLabelSize(0.035);
// pbpb150->GetYaxis()->SetTitleSize(0.035);
// pbpb150->GetYaxis()->SetTitleFont(42);
// pbpb150->GetZaxis()->SetLabelFont(42);
// pbpb150->GetZaxis()->SetLabelSize(0.035);
// pbpb150->GetZaxis()->SetTitleSize(0.035);
// pbpb150->GetZaxis()->SetTitleOffset(1);
// pbpb150->GetZaxis()->SetTitleFont(42);
// pbpb150->Draw("L SAME");
//
// Double_t xAxis8[101] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
//
// TH1D *pbpb160 = new TH1D("pbpb160","",100, xAxis8);
// pbpb160->SetBinContent(1,0.7443917);
// pbpb160->SetBinContent(2,1.018351);
// pbpb160->SetBinContent(3,0.8420676);
// pbpb160->SetBinContent(4,0.4980662);
// pbpb160->SetBinContent(5,0.2995607);
// pbpb160->SetBinContent(6,0.2248471);
// pbpb160->SetBinContent(7,0.2030803);
// pbpb160->SetBinContent(8,0.2016454);
// pbpb160->SetBinContent(9,0.2076616);
// pbpb160->SetBinContent(10,0.2167588);
// pbpb160->SetBinContent(11,0.2280067);
// pbpb160->SetBinContent(12,0.2400771);
// pbpb160->SetBinContent(13,0.2527437);
// pbpb160->SetBinContent(14,0.2657003);
// pbpb160->SetBinContent(15,0.2788231);
// pbpb160->SetBinContent(16,0.2915345);
// pbpb160->SetBinContent(17,0.3044238);
// pbpb160->SetBinContent(18,0.3170094);
// pbpb160->SetBinContent(19,0.3294097);
// pbpb160->SetBinContent(20,0.3414689);
// pbpb160->SetBinContent(21,0.3532298);
// pbpb160->SetBinContent(22,0.3645408);
// pbpb160->SetBinContent(23,0.3758861);
// pbpb160->SetBinContent(24,0.3863516);
// pbpb160->SetBinContent(25,0.3968091);
// pbpb160->SetBinContent(26,0.406916);
// pbpb160->SetBinContent(27,0.4167752);
// pbpb160->SetBinContent(28,0.4261143);
// pbpb160->SetBinContent(29,0.4351736);
// pbpb160->SetBinContent(30,0.4440929);
// pbpb160->SetBinContent(31,0.4529191);
// pbpb160->SetBinContent(32,0.4613186);
// pbpb160->SetBinContent(33,0.4693669);
// pbpb160->SetBinContent(34,0.4772305);
// pbpb160->SetBinContent(35,0.4846369);
// pbpb160->SetBinContent(36,0.4922208);
// pbpb160->SetBinContent(37,0.4993783);
// pbpb160->SetBinContent(38,0.506368);
// pbpb160->SetBinContent(39,0.5128407);
// pbpb160->SetBinContent(40,0.5195117);
// pbpb160->SetBinContent(41,0.5261692);
// pbpb160->SetBinContent(42,0.5322326);
// pbpb160->SetBinContent(43,0.5384222);
// pbpb160->SetBinContent(44,0.544187);
// pbpb160->SetBinContent(45,0.5497377);
// pbpb160->SetBinContent(46,0.5555947);
// pbpb160->SetBinContent(47,0.5608366);
// pbpb160->SetBinContent(48,0.5661989);
// pbpb160->SetBinContent(49,0.5710416);
// pbpb160->SetBinContent(50,0.5761028);
// pbpb160->SetBinContent(51,0.5812344);
// pbpb160->SetBinContent(52,0.5859115);
// pbpb160->SetBinContent(53,0.5903922);
// pbpb160->SetBinContent(54,0.5948604);
// pbpb160->SetBinContent(55,0.5993319);
// pbpb160->SetBinContent(56,0.6036235);
// pbpb160->SetBinContent(57,0.6077393);
// pbpb160->SetBinContent(58,0.6117602);
// pbpb160->SetBinContent(59,0.6158614);
// pbpb160->SetBinContent(60,0.6197206);
// pbpb160->SetBinContent(61,0.623636);
// pbpb160->SetBinContent(62,0.6272747);
// pbpb160->SetBinContent(63,0.6310807);
// pbpb160->SetBinContent(64,0.6347861);
// pbpb160->SetBinContent(65,0.6381764);
// pbpb160->SetBinContent(66,0.6413886);
// pbpb160->SetBinContent(67,0.6449497);
// pbpb160->SetBinContent(68,0.6483152);
// pbpb160->SetBinContent(69,0.6513547);
// pbpb160->SetBinContent(70,0.6541982);
// pbpb160->SetBinContent(71,0.6577139);
// pbpb160->SetBinContent(72,0.6609177);
// pbpb160->SetBinContent(73,0.6638693);
// pbpb160->SetBinContent(74,0.6667082);
// pbpb160->SetBinContent(75,0.669638);
// pbpb160->SetBinContent(76,0.6723953);
// pbpb160->SetBinContent(77,0.6750011);
// pbpb160->SetBinContent(78,0.6776055);
// pbpb160->SetBinContent(79,0.6804563);
// pbpb160->SetBinContent(80,0.6830095);
// pbpb160->SetBinContent(81,0.6856675);
// pbpb160->SetBinContent(82,0.6878457);
// pbpb160->SetBinContent(83,0.6907964);
// pbpb160->SetBinContent(84,0.6931277);
// pbpb160->SetBinContent(85,0.695335);
// pbpb160->SetBinContent(86,0.6979363);
// pbpb160->SetBinContent(87,0.699952);
// pbpb160->SetBinContent(88,0.702069);
// pbpb160->SetBinContent(89,0.7044971);
// pbpb160->SetBinContent(90,0.7066798);
// pbpb160->SetBinContent(91,0.708959);
// pbpb160->SetBinContent(92,0.7107296);
// pbpb160->SetBinContent(93,0.7127267);
// pbpb160->SetBinContent(94,0.7147527);
// pbpb160->SetBinContent(95,0.7170395);
// pbpb160->SetBinContent(96,0.7188167);
// pbpb160->SetBinContent(97,0.7208101);
// pbpb160->SetBinContent(98,0.7229525);
// pbpb160->SetBinContent(99,0.7244674);
// pbpb160->SetBinContent(100,0.7264836);
// // pbpb160->SetBinError(100,0.002376799);
// pbpb160->SetEntries(7068177);
// pbpb160->SetLineColor(3);
// pbpb160->SetLineWidth(3);
// // pbpb160->GetXaxis()->SetRange(0,100);
// // pbpb160->GetXaxis()->SetRangeUser(1.,50);
// pbpb160->GetXaxis()->SetLabelFont(42);
// pbpb160->GetXaxis()->SetLabelSize(0.035);
// pbpb160->GetXaxis()->SetTitleSize(0.035);
// pbpb160->GetXaxis()->SetTitleOffset(1);
// pbpb160->GetXaxis()->SetTitleFont(42);
// pbpb160->GetYaxis()->SetLabelFont(42);
// pbpb160->GetYaxis()->SetLabelSize(0.035);
// pbpb160->GetYaxis()->SetTitleSize(0.035);
// pbpb160->GetYaxis()->SetTitleFont(42);
// pbpb160->GetZaxis()->SetLabelFont(42);
// pbpb160->GetZaxis()->SetLabelSize(0.035);
// pbpb160->GetZaxis()->SetTitleSize(0.035);
// pbpb160->GetZaxis()->SetTitleOffset(1);
// pbpb160->GetZaxis()->SetTitleFont(42);
// pbpb160->Draw("L SAME");
// v2g->SetLineWidth(3);//"C" 	A smooth Curve is drawn ,
// v2g->SetLineColor(kGray+3);//"C" 	A smooth Curve is drawn ,
// // v2g->SetFillColor(kGray+1);
// // v2g->SetMarkerColor(kGray+1);
// // v2g->SetMarkerStyle(kCircle);
// v2g->Draw("p ");
// v2g->SetTitle("D0 meson, 0-10%, R_{AA} CMS - #sqrt{s_{NN}}=5.02TeV");
// v2g->GetXaxis()->SetTitle("p_{T}(GeV)");
// v2g->GetYaxis()->SetTitle("R_{AA}");
//
// auto t5 = new TTree();
// t5->ReadFile("/home/lucas/Documentos/0-10%/constraapbpb_160.txt","a:b");
//
// t5->SetLineColor(4);
// t5->SetLineWidth(3);
// t5->Draw("b:a", "","l same");
// auto t6 = new TTree();
// t6->ReadFile("/home/lucas/Documentos/0-10%/TTpbpbraa_160new26112019.txt","a:b");
// t6->SetLineColor(31);
// t6->SetLineWidth(3);
// t6->Draw("b:a", "","l same");
// auto t7 = new TTree();
// t7->ReadFile("/home/lucas/Documentos/0-10%/MT.160.PbPb.Raa.160.new.txt","a:b");
// t7->SetLineColor(11);
// t7->SetLineWidth(3);
// t7->Draw("b:a", "","l same");
// auto t8 = new TTree();
// t8->ReadFile("/home/lucas/Documentos/0-10%/Mt.150.PbPbRaa.new.txt","a:b");
// t8->SetLineColor(8);
// t8->SetLineWidth(3);
// t8->Draw("b:a", "","l same");
// v2->SetLineWidth(3);
// v2->SetLineColor(kGray+1);
// v2->Draw("same F2[]");




//
// // v2->SetMarkerStyle(21);
// // v2->SetMarkerColor(4);
// v2->SetFillColor(4);
// v2->SetLineWidth(4);
// v2->GetXaxis()->SetLimits(0,40);
// v2->GetYaxis()->SetLimits(0,0.14);
// v2->GetXaxis()->SetRange(0,40);
// v2->Draw("E1 same");
//
// hist17->SetMarkerColor(4);
// hist17->SetLineWidth(3);
// hist17->SetLineColor(4);
// hist17->SetLineStyle(9);
// // hist17->SetLineStyle(9);
// // hist17->GetYaxis()->SetLimits(0.0,0.01);
// // hist17->GetXaxis()->SetLimits(0,0.15);
// // hist17->GetXaxis()->SetRangeUser(0,50.);
// hist17->Draw("L same");
// // hist2->SetMarkerStyle(28);
// // hist2->SetFillColor(32);
// hist2->SetMarkerColor(4);
// hist2->SetLineWidth(3);
// hist2->SetLineColor(4);
// // hist2->SetLineStyle(9);
// // hist2->GetYaxis()->SetLimits(0,0.01);
// // hist2->GetXaxis()->SetLimits(0,0.15);
// // hist2->GetXaxis()->SetRangeUser(0,50.);
// // hist2->GetYaxis()->SetLimits(0,0.14);
// // hist2->GetXaxis()->SetLimits(0,40);
// hist2->Draw("L same");
//
///
// hist8->SetLineColor(8);
// hist8->SetLineWidth(3);
// hist8->SetMarkerStyle(21);
// hist8->SetMarkerColor(8);
// hist8->GetYaxis()->SetLimits(0,0.01);
// hist8->GetXaxis()->SetLimits(0,0.15);
// // hist8->GetYaxis()->SetLimits(0.01,0.1);
// // hist8->GetXaxis()->SetLimits(1.01,50);
// // hist8->GetXaxis()->SetRangeUser(1.,50);
// hist8->Draw("L same");
//
// hist9->SetLineColor(48);
// // hist9->SetLineStyle(9);
// hist9->SetMarkerStyle(21);
// hist9->SetMarkerColor(48);
// hist9->SetLineWidth(3);
// // hist9->GetYaxis()->SetLimits(0.01,0.1);
// // hist9->GetXaxis()->SetLimits(1.01,50);
// hist9->GetXaxis()->SetRangeUser(1.,50);
// hist9->Draw("L same");

// hist11->SetLineColor(22);
// hist11->SetLineWidth(3);
// hist11->GetXaxis()->SetLimits(0.975,50);
// hist11->Draw("L SAME");
// hist13->SetTitle("D0 meson v_{2}{2} - MT Model Frag & Coal  with TRENTO");
// hist13->GetXaxis()->SetTitle("p_{T}(GeV)");
// hist13->GetXaxis()->SetTitleSize(0.04);
// hist13->GetYaxis()->SetTitle("v_{2}{2}");
// hist13->GetYaxis()->SetTitleSize(0.04);
// hist13->GetYaxis()->SetTitleOffset(1);
// hist13->GetXaxis()->SetLabelSize(0.05);
// hist13->GetYaxis()->SetLabelSize(0.05);
// hist13->SetLineColor(3);
// hist13->SetLineWidth(0);
// hist13->SetLineStyle(9);
//
// // hist13->GetXaxis()->SetLimits(1.3,50);
// hist13->GetXaxis()->SetRangeUser(1,50);
// hist13->Draw("L ");


// TLegend *leg=new TLegend(0.615,0.65,0.936,0.8905);
//    leg->SetBorderSize(0);
//    leg->SetFillStyle(0);
//    // leg->AddEntry(v2,"CMS","fp");
//    leg->AddEntry(hist17,"XeXe T_{d}=150MeV - 0-10%","l");
//    leg->AddEntry(hist2,"XeXe T_{d}=160MeV - 0-10%","l");
//    leg->AddEntry(hist3,"XeXedef T_{d}=150MeV - 0-10%","l");
//    leg->AddEntry(hist4,"XeXedef T_{d}=160MeV - 0-10%","l");
//    leg->AddEntry(hist5,"OO T_{d}=150MeV - 0-10%","l");
//    leg->AddEntry(hist6,"OO T_{d}=160MeV - 0-10%","l");
//    leg->AddEntry(hist7,"PbPb T_{d}=150MeV - 0-10%","l");
//    leg->AddEntry(hist8,"PbPb T_{d}=160MeV - 0-10%","l");
//    // // leg->AddEntry(hist7,"OO T_{d}=160MeV - 0-10%","l");
//    // leg->AddEntry(hist9,"ArAr T_{d}=160MeV - 0-10%","l");
//    // leg->AddEntry(hist11,"PbPb T_{d}=150MeV - 0-10%","l");
//    leg->SetTextFont(132);
//    // leg->SetHeader("v2{2}");
//    leg->SetTextFont(42);
//    leg->Draw();

   //Adding text
   // TLatex *t1 = new TLatex();
   // t1->SetNDC();
   // t1->SetTextAlign(22);
   // t1->SetTextFont(63);
   // t1->SetTextSizePixels(22);
   // t1->DrawLatex(.4,0.25,"CMS - 0-10% - |y|<1");

// cc->cd(2);
// // v3->SetTitle(" D0 meson v3{2} - PbPb #sqrt{S_{NN}} = 5.02TeV with TRENTO");
// // v3->SetMarkerStyle(21);
// // v3->SetMarkerColor(36);
// //  v3->SetFillColor(36);
// // v3->SetYTitle("v3_{2}");
// // v3->SetXTitle("p_{T}(GeV)");
// // v3->SetLineWidth(2);
// // v3->Draw("ACP");
//
// hist4->SetMarkerColor(35);
// hist4->SetLineWidth(2);
// hist4->GetXaxis()->SetRangeUser(0,50);
// hist4->Draw("L SAME");
//
// // hist2->SetMarkerStyle(28);
// // hist2->SetFillColor(2);
// hist5->SetMarkerColor(25);
//  hist5->SetLineWidth(2);
// hist5->SetLineColor(40);
// hist5->GetXaxis()->SetRangeUser(0,50);
// hist5->Draw("CP SAME");
//
// // hist3->SetMarkerStyle(28);
// // hist3->SetMarkerColor(2);
// hist6->SetLineColor(38);
// hist6->SetLineWidth(3);
// hist6->GetXaxis()->SetRangeUser(0,50);
//
// // hist6->SetFillColor(38);
// hist6->Draw("CP SAME");
//
// hist8->SetLineColor(48);
// hist8->SetLineWidth(3);
// hist8->GetXaxis()->SetRangeUser(0,50);
//
// // hist8->SetFillColor(38);
// hist8->Draw("CP SAME");
//
// hist10->SetLineColor(9);
// hist10->SetLineWidth(3);
// hist10->GetXaxis()->SetRangeUser(1,50);
//
// // hist10->SetFillColor(38);
// hist10->Draw("L same");
//
// hist11->SetLineColor(33);
// hist11->SetLineWidth(3);
// hist11->GetXaxis()->SetRangeUser(1,50);
//
//
// // hist12->SetFillColor(38);
// hist11->Draw("L SAME");
//
// hist14->SetLineColor(22);
// hist14->SetLineWidth(3);
// hist14->GetXaxis()->SetRangeUser(0,50);
// hist14->Draw("CP SAME");
//0.615,0.65,0.936,0.8905
TLegend *leg1=new TLegend(0.915,0.65,0.516,0.8605);
   leg1->SetBorderSize(0);
   leg1->SetFillStyle(0);
   // leg1->AddEntry(v2g,"CMS","lp");
   // leg1->AddEntry(t8,"PbPb  - G&A T_{d}=150MeV","lp");
   // leg1->AddEntry(t7,"PbPb - M&T T_{d}=160MeV","lp");
   // leg1->AddEntry(t5,"PbPb  - #alpha #Gamma_{flow} T_{d}=160MeV","l");
   // leg1->AddEntry(t6,"PbPb  - #xi T^{2}#Gamma_{flow} T_{d}=160MeV","l");
   // leg1->AddEntry(hist1,"OO -T_{d}=160MeV - 0-10%","l");
   // leg1->AddEntry(hist2,"ArAr -T_{d}=160MeV - 0-10%","l");
   // leg1->AddEntry(hist3,"XeXe T_{d}=160MeV - 0-10%","l");
   // leg1->AddEntry(hist4,"XeXedef T_{d}=160MeV - 0-10%","lfp");
   leg1->AddEntry(t1,"PbPb - MT  ","l");
   leg1->AddEntry(t2,"PbPb - GA ","l");
   leg1->AddEntry(t3,"PbPb - #alpha ","l");
   leg1->AddEntry(t4,"PbPb - #xi T^{2} ","l");
   // leg1->AddEntry(t5,"PbPb T_{d}=160MeV - 5.02TeV","l");
   // leg1->AddEntry(hist11,"XeXedef T_{d}=160MeV - 5.44TeV","l");
   // leg1->SetTextFont(130);
   // leg1->SetHeader("v3{2}");
   leg1->SetTextFont(44);
   leg1->SetTextSize(14);
   leg1->Draw();

   // TLatex *text6 = new TLatex(37,1.04,"0-10%");
   //  text6 -> SetTextFont(42);
   //  text6 -> SetTextColor(1);
   //  text6 -> SetTextSize(0.055);
   //  text6 -> Draw("");


   //Adding text
   TLatex *t = new TLatex();
t->SetNDC();
t->SetTextAlign(22);
t->SetTextFont(13);
t->SetTextSizePixels(32);
// t->SetTextSizePixel(22);
t->DrawLatex(.80,0.3,"0-10% ");


TPaveText *pt = new TPaveText(0.1728657,0.928758,0.8271343,0.995,"blNDC");
pt->SetName("title");
pt->SetBorderSize(0);
pt->SetFillColor(0);
pt->SetFillStyle(0);
pt->SetTextFont(132);
TText *pt_LaTex = pt->AddText("D0 meson R_{AA} - MT Model with TRENTO PbPb - 5.02TeV");
pt->Draw();
cc->Modified();
cc->cd();
cc->SetSelected(cc);
// TLatex *l = new TLatex();
// l->SetNDC();
// l->SetTextAlign(22);
// l->SetTextFont(42);
// l->SetTextSizePixels(22);
// l->DrawLatex(.66,0.63,"#sqrt{S_{NN}}=5.02TeV ");
//
//     t->SetTextAlign(13); //align at top left
//     t->SetTextAlign(12); // left, vertically centered
//     t->SetTextAlign(22); // centered horizontally and vertically
//     t->SetTextAlign(11); //default bottom alignment
// cc->cd(3);

// hist7->Draw();
h12asciii (hist1);
}

void h12asciii (TH1* v2)
{
   Int_t n = v2->GetNbinsX();
   // Int_t e = v2->GetBinErrors();
   for (Int_t i=1; i<=n; i++) {
      printf("%g %g\n",
             v2->GetBinLowEdge(i)+v2->GetBinWidth(i)/2,
             v2->GetBinContent(i));
             // c = Read("%g %g/n",v2->GetBinLowEdge(i)+v2->GetBinWidth(i)/2,
             // v2->GetBinContent(i),"RECREATE");
   }
}
