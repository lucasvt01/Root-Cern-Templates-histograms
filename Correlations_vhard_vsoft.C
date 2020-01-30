// void h12ascii (TH1* v2);
void corr(){

gStyle->SetOptStat(kFALSE);
//Read file
TFile *h1 = TFile::Open("/home/lucas/Documentos/0-10%/MT.150.PbPb.vnanalysis.root");
// TFile *h1 = TFile::Open("/home/lucas/Documentos/30-50%/MT.PbPb.160.PbPb.3050.new.vnanalysis.root");
TFile *h2 = TFile::Open("/home/lucas/Documentos/0-10%/MT.150.PbPb.vnanalysis.root");

// TH1F *hist1 = (TH1F*)h1->Get("dmeson/30-50/Profile:v3:(8.00-13.00)");
TH1F *hist1 = (TH1F*)h1->Get("dmeson/30-50/Profile:v2:(8.00-13.00)");
TH1F *hist2 = (TH1F*)h2->Get("dmeson/0-20/Profile:v2:(8.00-13.00)");

// TCanvas *cc = new TCanvas("v2XeXes","Data",100,10,1000,500);
TCanvas *cc = new TCanvas("raa","Data",100,10,900,900);
gPad->  SetTickx();
gPad->  SetTicky();
TH1 *frame = gPad->DrawFrame(0.,0.,0.095,0.035);
// frame->GetXaxis()->SetLabelSize(5.2323);
// frame->SetTitle("D0 meson R_{AA} - MT Model with TRENTO PbPb - 5.02TeV");
frame->SetTitleFont(132);
frame->SetLabelFont(42);
// frame->GetXaxis()->SetTitle("p_{T}(GeV)");
// frame->SetTitle(" D0 meson 0-10% - MT Model Frag & Coal  with TRENTO");
frame->SetYTitle("v_{3}^{heavy}(8 #leq p_{T} #leq 13(GeV))");
frame->SetTitle(" D0 meson 30-50% - MT Model Frag & Coal  with TRENTO");
frame->SetXTitle("v_{3}^{soft}");
frame->GetXaxis()->CenterTitle(true);
frame->GetXaxis()->SetLabelFont(132);
frame->GetXaxis()->SetLabelSize(0.03);
frame->GetXaxis()->SetTitleSize(0.05);
frame->GetXaxis()->SetTitleOffset(0.85);
frame->GetXaxis()->SetTitleFont(132);
// frame->GetYaxis()->SetTitle("R_{AA}");
frame->GetYaxis()->CenterTitle(true);
frame->GetYaxis()->SetLabelFont(42);
frame->GetYaxis()->SetLabelSize(0.035);
frame->GetYaxis()->SetTitleSize(0.05);
frame->GetYaxis()->SetTitleFont(132);
frame->GetYaxis()->SetTitleOffset(1.2);
frame->GetZaxis()->SetLabelFont(42);
frame->GetZaxis()->SetLabelSize(0.035);
frame->GetZaxis()->SetTitleSize(0.035);
frame->GetZaxis()->SetTitleOffset(1);
frame->GetZaxis()->SetTitleFont(132);
  // frame->GetYaxis()->Centered();
  // frame->GetYaxis()->SetFont(13);

// cc->SetLogx();

auto t1 = new TTree();
// t1->ReadFile("/home/lucas/Documentos/0-10%/correlation/corrpbpbv3coal160trento2.txt","a:b");
t1->ReadFile("/home/lucas/Documentos/30-50%/Correlation/corrpbpbv3heavyXvsoftcoal160trento2.txt","a:b");
t1->SetLineColor(kGreen+1);
t1->SetLineWidth(3);
t1->Draw("b:a", "","l same");
// hist1->GetYaxis()->SetRangeUser(0.,0.1);
// hist1->Draw("LF2 same");

auto t2 = new TTree();
// t2->ReadFile("/home/lucas/Documentos/0-10%/correlation/corrpbpbv3coal150trento2.txt","a:b");
t2->ReadFile("/home/lucas/Documentos/30-50%/Correlation/corrpbpbv3heavyXvsoftcoal150trento2.txt","a:b");
t2->SetLineColor(kGreen+2);
t2->SetLineWidth(3);
// t2->SetLineStyle(9);
t2->Draw("b:a", "","l same");
auto t3 = new TTree();
// t3->ReadFile("/home/lucas/Documentos/0-10%/correlation/corrpbpbv3noncoal160trento2.txt","a:b");
t3->ReadFile("/home/lucas/Documentos/30-50%/Correlation/corrpbpbv3heavyXvsoftnoncoal160trento2.txt","a:b");
t3->SetLineColor(kGreen+1);
t3->SetLineWidth(3);
t3->SetLineStyle(9);
t3->Draw("b:a", "","l same");
auto t4 = new TTree();
// t4->ReadFile("/home/lucas/Documentos/0-10%/correlation/corrpbpbv3noncoal150trento2.txt","a:b");
t4->ReadFile("/home/lucas/Documentos/30-50%/Correlation/corrpbpbv3heavyXvsoftnoncoal150trento2.txt","a:b");
t4->SetLineColor(kGreen+2);
t4->SetLineWidth(3);
t4->SetLineStyle(9);
t4->Draw("b:a", "","l same");

TLegend *leg2=new TLegend(0.985,0.65,0.616,0.8605);
   leg2->SetBorderSize(0);
   leg2->SetFillStyle(0);
   leg2->AddEntry(t1,"PbPb T_{d}=160MeV ","l");
   leg2->AddEntry(t2,"PbPb T_{d}=150MeV ","l");
   leg2->AddEntry(t3,"PbPb T_{d}=160MeV","l");
   leg2->AddEntry(t4,"PbPb T_{d}=150MeV","l");
   // leg2->AddEntry(t7,"XeXe T_{d}=150MeV","l");
   // leg2->AddEntry(t8,"XeXedef T_{d}=150MeV","l");
   // leg2->AddEntry(t6,"PbPb T_{d}=150MeV","l");
   // leg2->AddEntry(t9,"ArAr T_{d}=150MeV","l");
   // leg2->AddEntry(t5,"OO T_{d}=160MeV","l");
   // leg2->AddEntry(v2g,"CMS","lpg");
   // leg2->AddEntry(t4,"XeXedef T_{d}=160MeV - 5.44TeV","lfp");
   // leg2->AddEntry(t2,"ArAr -T_{d}=160MeV - 5.85TeV","l");
   // leg2->AddEntry(t2,"OO -T_{d}=160MeV - 6.5TeV ","l");
   leg2->SetTextFont(44);
   leg2->SetTextSize(14);
   leg2->Draw();


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

// h12ascii (hist1);
//
// // hist5->Saveas()
// }
//
// void h12ascii (TH1* v2)
// {
//    Int_t n = v2->GetNbinsX();
//    // Int_t e = v2->GetBinErrors();
//    for (Int_t i=1; i<=n; i++) {
//       printf("%g %g\n",
//              v2->GetBinLowEdge(i)+v2->GetBinWidth(i)/2,
//              v2->GetBinContent(i));
//        //SaveAs("test.txt");
//    }


}
