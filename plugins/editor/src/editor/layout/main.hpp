/* This file is generated by the layout maker tool. */
auto* const view__0 = createLogicalGroup(CRect(0, 0, 800, 475), -1, "", kCenterText, 14);
mainView = view__0;
auto* const view__1 = createBackground(CRect(90, 110, 880, 395), -1, "", kCenterText, 14);
imageContainer_ = view__1;
view__0->addView(view__1);
enterPalette(invertedPalette);
auto* const view__2 = createLogicalGroup(CRect(0, 0, 814, 110), -1, "", kCenterText, 14);
view__0->addView(view__2);
auto* const view__3 = createRoundedGroup(CRect(5, 4, 180, 105), -1, "", kCenterText, 14);
view__2->addView(view__3);
auto* const view__4 = createAboutButton(CRect(27, 5, 147, 65), kTagAbout, "", kCenterText, 14);
view__3->addView(view__4);
auto* const view__5 = createInfoButton(CRect(51, 69, 83, 101), kTagFirstChangePanel+kPanelInfo, "", kCenterText, 30);
panelButtons_[kPanelInfo] = view__5;
view__3->addView(view__5);
auto* const view__6 = createCCButton(CRect(92, 69, 124, 101), kTagFirstChangePanel+kPanelControls, "", kCenterText, 30);
panelButtons_[kPanelControls] = view__6;
view__3->addView(view__6);
auto* const view__7 = createSettingsButton(CRect(132, 69, 164, 101), kTagFirstChangePanel+kPanelSettings, "", kCenterText, 30);
panelButtons_[kPanelSettings] = view__7;
view__3->addView(view__7);
auto* const view__8 = createHomeButton(CRect(11, 69, 43, 101), kTagFirstChangePanel+kPanelGeneral, "", kCenterText, 30);
panelButtons_[kPanelGeneral] = view__8;
view__3->addView(view__8);
auto* const view__9 = createRoundedGroup(CRect(185, 5, 575, 105), -1, "", kCenterText, 14);
view__2->addView(view__9);
auto* const view__10 = createHLine(CRect(10, 36, 380, 41), -1, "", kCenterText, 14);
view__9->addView(view__10);
auto* const view__11 = createHLine(CRect(10, 68, 380, 73), -1, "", kCenterText, 14);
view__9->addView(view__11);
auto* const view__12 = createClickableLabel(CRect(10, 8, 330, 38), kTagLoadSfzFile, "DefaultInstrument.sfz", kLeftText, 20);
sfzFileLabel_ = view__12;
view__9->addView(view__12);
auto* const view__13 = createLabel(CRect(80, 40, 390, 75), -1, "", kLeftText, 20);
keyswitchLabel_ = view__13;
view__9->addView(view__13);
auto* const view__14 = createBadge(CRect(10, 42, 70, 68), -1, "", kCenterText, 20);
keyswitchBadge_ = view__14;
view__9->addView(view__14);
auto* const view__15 = createInactiveLabel(CRect(10, 40, 370, 70), -1, "No key switch", kLeftText, 20);
keyswitchInactiveLabel_ = view__15;
view__9->addView(view__15);
view__15->setVisible(false);
auto* const view__16 = createLabel(CRect(10, 73, 70, 98), -1, "Voices:", kRightText, 12);
view__9->addView(view__16);
auto* const view__17 = createPreviousFileButton(CRect(303, 13, 328, 38), kTagPreviousSfzFile, "", kCenterText, 24);
view__9->addView(view__17);
auto* const view__18 = createNextFileButton(CRect(328, 13, 353, 38), kTagNextSfzFile, "", kCenterText, 24);
view__9->addView(view__18);
auto* const view__19 = createChevronDropDown(CRect(353, 13, 378, 38), kTagFileOperations, "", kCenterText, 24);
fileOperationsMenu_ = view__19;
view__9->addView(view__19);
auto* const view__20 = createLabel(CRect(75, 73, 115, 98), -1, "", kCenterText, 12);
infoVoicesLabel_ = view__20;
view__9->addView(view__20);
auto* const view__21 = createLabel(CRect(137, 73, 177, 98), -1, "Max:", kRightText, 12);
view__9->addView(view__21);
auto* const view__22 = createLabel(CRect(193, 73, 228, 98), -1, "", kCenterText, 12);
numVoicesLabel_ = view__22;
view__9->addView(view__22);
auto* const view__23 = createLabel(CRect(271, 73, 331, 98), -1, "Memory:", kRightText, 12);
view__9->addView(view__23);
auto* const view__24 = createLabel(CRect(337, 73, 387, 98), -1, "", kCenterText, 12);
memoryLabel_ = view__24;
view__9->addView(view__24);
auto* const view__25 = createChevronValueDropDown(CRect(235, 77, 255, 97), kTagSetNumVoices, "", kCenterText, 16);
numVoicesSlider_ = view__25;
view__9->addView(view__25);
auto* const view__26 = createRoundedGroup(CRect(580, 5, 795, 105), -1, "", kCenterText, 14);
view__2->addView(view__26);
auto* const view__27 = createKnob48(CRect(7, 15, 55, 63), -1, "", kCenterText, 14);
view__26->addView(view__27);
view__27->setVisible(false);
auto* const view__28 = createValueLabel(CRect(2, 65, 62, 70), -1, "Center", kCenterText, 12);
view__26->addView(view__28);
view__28->setVisible(false);
auto* const view__29 = createKnobCCBox(CRect(6, 5, 76, 95), kTagSetCCVolume, "Volume", kCenterText, 12);
volumeCCKnob_ = view__29;
view__26->addView(view__29);
auto* const view__30 = createKnobCCBox(CRect(83, 5, 153, 95), kTagSetCCPan, "Pan", kCenterText, 12);
panCCKnob_ = view__30;
view__26->addView(view__30);
auto* const view__31 = createVMeter(CRect(159, 5, 182, 95), -1, "", kCenterText, 14);
meters_[0] = view__31;
view__26->addView(view__31);
auto* const view__32 = createVMeter(CRect(183, 5, 206, 95), -1, "", kCenterText, 14);
meters_[1] = view__32;
view__26->addView(view__32);
enterPalette(defaultPalette);
auto* const view__33 = createLogicalGroup(CRect(5, 110, 795, 395), -1, "", kCenterText, 14);
subPanels_[kPanelInfo] = view__33;
view__0->addView(view__33);
view__33->setVisible(false);
auto* const view__34 = createRoundedGroup(CRect(0, 0, 790, 285), -1, "", kCenterText, 14);
view__33->addView(view__34);
auto* const view__35 = createLabel(CRect(15, 10, 75, 35), -1, "Curves:", kLeftText, 14);
view__34->addView(view__35);
auto* const view__36 = createLabel(CRect(15, 35, 75, 60), -1, "Masters:", kLeftText, 14);
view__34->addView(view__36);
auto* const view__37 = createLabel(CRect(15, 60, 75, 85), -1, "Groups:", kLeftText, 14);
view__34->addView(view__37);
auto* const view__38 = createLabel(CRect(15, 85, 75, 110), -1, "Regions:", kLeftText, 14);
view__34->addView(view__38);
auto* const view__39 = createLabel(CRect(15, 110, 75, 135), -1, "Samples:", kLeftText, 14);
view__34->addView(view__39);
auto* const view__40 = createLabel(CRect(115, 10, 155, 35), -1, "0", kCenterText, 14);
infoCurvesLabel_ = view__40;
view__34->addView(view__40);
auto* const view__41 = createLabel(CRect(115, 35, 155, 60), -1, "0", kCenterText, 14);
infoMastersLabel_ = view__41;
view__34->addView(view__41);
auto* const view__42 = createLabel(CRect(115, 60, 155, 85), -1, "0", kCenterText, 14);
infoGroupsLabel_ = view__42;
view__34->addView(view__42);
auto* const view__43 = createLabel(CRect(115, 85, 155, 110), -1, "0", kCenterText, 14);
infoRegionsLabel_ = view__43;
view__34->addView(view__43);
auto* const view__44 = createLabel(CRect(115, 110, 155, 135), -1, "0", kCenterText, 14);
infoSamplesLabel_ = view__44;
view__34->addView(view__44);
auto* const view__45 = createLogicalGroup(CRect(5, 110, 795, 395), -1, "", kCenterText, 14);
subPanels_[kPanelControls] = view__45;
view__0->addView(view__45);
view__45->setVisible(false);
auto* const view__46 = createRoundedGroup(CRect(0, 0, 790, 285), -1, "", kCenterText, 14);
view__45->addView(view__46);
auto* const view__47 = createControlsPanel(CRect(0, 0, 790, 285), -1, "", kCenterText, 12);
controlsPanel_ = view__47;
view__46->addView(view__47);
auto* const view__48 = createLogicalGroup(CRect(0, 110, 825, 470), -1, "", kCenterText, 14);
subPanels_[kPanelSettings] = view__48;
view__0->addView(view__48);
auto* const view__49 = createRoundedGroup(CRect(5, 0, 795, 285), -1, "", kCenterText, 14);
view__48->addView(view__49);
auto* const view__50 = createValueMenu(CRect(170, 85, 240, 110), kTagSetOversampling, "", kCenterText, 12);
oversamplingSlider_ = view__50;
view__49->addView(view__50);
auto* const view__51 = createLabel(CRect(15, 85, 100, 110), -1, "Oversampling", kLeftText, 12);
view__49->addView(view__51);
auto* const view__52 = createLabel(CRect(15, 60, 90, 85), -1, "Preload size", kLeftText, 12);
view__49->addView(view__52);
auto* const view__53 = createValueMenu(CRect(170, 60, 240, 85), kTagSetPreloadSize, "", kCenterText, 12);
preloadSizeSlider_ = view__53;
view__49->addView(view__53);
auto* const view__54 = createValueMenu(CRect(430, 35, 510, 60), kTagSetSampleQuality, "", kCenterText, 12);
sampleQualitySlider_ = view__54;
view__49->addView(view__54);
auto* const view__55 = createLabel(CRect(285, 35, 335, 60), -1, "Sample", kLeftText, 12);
view__49->addView(view__55);
auto* const view__56 = createLabel(CRect(285, 85, 345, 110), -1, "Oscillator", kLeftText, 12);
view__49->addView(view__56);
auto* const view__57 = createValueMenu(CRect(430, 85, 510, 110), kTagSetOscillatorQuality, "", kCenterText, 12);
oscillatorQualitySlider_ = view__57;
view__49->addView(view__57);
auto* const view__58 = createOptionMenu(CRect(675, 35, 775, 60), kTagThemeMenu, "", kCenterText, 12);
themeMenu_ = view__58;
view__49->addView(view__58);
auto* const view__59 = createLabel(CRect(550, 35, 595, 60), -1, "Theme", kLeftText, 12);
view__49->addView(view__59);
auto* const view__60 = createLabel(CRect(550, 60, 645, 85), -1, "User SFZ folder", kLeftText, 12);
view__49->addView(view__60);
auto* const view__61 = createValueButton(CRect(675, 60, 775, 85), kTagChooseUserFilesDir, "DefaultPath", kCenterText, 12);
userFilesDirButton_ = view__61;
view__49->addView(view__61);
auto* const view__62 = createLabel(CRect(550, 175, 610, 200), -1, "Root key", kLeftText, 12);
view__49->addView(view__62);
auto* const view__63 = createLabel(CRect(550, 200, 620, 225), -1, "Frequency", kLeftText, 12);
view__49->addView(view__63);
auto* const view__64 = createStyledKnob(CRect(715, 227, 763, 275), kTagSetStretchedTuning, "", kCenterText, 14);
stretchedTuningSlider_ = view__64;
view__49->addView(view__64);
auto* const view__65 = createLabel(CRect(550, 235, 600, 260), -1, "Stretch", kLeftText, 12);
view__49->addView(view__65);
auto* const view__66 = createLabel(CRect(550, 150, 610, 175), -1, "Scala file", kLeftText, 12);
view__49->addView(view__66);
auto* const view__67 = createValueButton(CRect(650, 150, 750, 175), kTagLoadScalaFile, "DefaultScale", kCenterText, 12);
scalaFileButton_ = view__67;
view__49->addView(view__67);
auto* const view__68 = createValueMenu(CRect(710, 175, 745, 200), kTagSetScalaRootKey, "", kCenterText, 12);
scalaRootKeySlider_ = view__68;
view__49->addView(view__68);
auto* const view__69 = createValueMenu(CRect(745, 175, 775, 200), kTagSetScalaRootKey, "", kCenterText, 12);
scalaRootOctaveSlider_ = view__69;
view__49->addView(view__69);
auto* const view__70 = createResetSomethingButton(CRect(750, 150, 775, 175), kTagResetScalaFile, "", kCenterText, 12);
scalaResetButton_ = view__70;
view__49->addView(view__70);
auto* const view__71 = createLabel(CRect(285, 60, 430, 85), -1, "... when freewheeling", kLeftText, 12);
view__49->addView(view__71);
auto* const view__72 = createValueMenu(CRect(430, 60, 510, 85), kTagSetFreewheelingSampleQuality, "", kCenterText, 12);
freewheelingSampleQualitySlider_ = view__72;
view__49->addView(view__72);
auto* const view__73 = createLabel(CRect(15, 110, 160, 135), -1, "Sustain cancels release", kLeftText, 12);
view__49->addView(view__73);
auto* const view__74 = createCheckbox(CRect(195, 110, 220, 135), kTagSetSustainCancelsRelease, "", kCenterText, 14);
sustainCancelsReleaseCheckbox_ = view__74;
view__49->addView(view__74);
auto* const view__75 = createLabel(CRect(15, 35, 240, 55), -1, "SFIZZ_VERSION", kCenterText, 10);
sfizzVersionLabel_ = view__75;
view__49->addView(view__75);
auto* const view__76 = createLabel(CRect(285, 5, 395, 30), -1, "Rendering quality", kLeftText, 12);
view__49->addView(view__76);
auto* const view__77 = createHLine(CRect(15, 25, 240, 30), -1, "", kCenterText, 14);
view__49->addView(view__77);
auto* const view__78 = createLabel(CRect(15, 5, 110, 30), -1, "Engine options", kLeftText, 12);
view__49->addView(view__78);
auto* const view__79 = createHLine(CRect(575, 25, 760, 30), -1, "", kCenterText, 14);
view__49->addView(view__79);
auto* const view__80 = createLabel(CRect(550, 5, 590, 30), -1, "Other", kLeftText, 12);
view__49->addView(view__80);
auto* const view__81 = createLabel(CRect(550, 120, 775, 145), -1, "Tuning", kLeftText, 12);
view__49->addView(view__81);
auto* const view__82 = createHLine(CRect(285, 25, 510, 30), -1, "", kCenterText, 14);
view__49->addView(view__82);
auto* const view__83 = createHLine(CRect(550, 25, 775, 30), -1, "", kCenterText, 14);
view__49->addView(view__83);
auto* const view__84 = createHLine(CRect(550, 140, 775, 145), -1, "", kCenterText, 14);
view__49->addView(view__84);
auto* const view__85 = createChevronValueDropDown(CRect(750, 200, 775, 225), kTagSetTuningFrequency, "", kCenterText, 24);
tuningFrequencyDropdown_ = view__85;
view__49->addView(view__85);
auto* const view__86 = createTextEdit(CRect(690, 200, 750, 225), kTagSetTuningFrequency, "", kCenterText, 12);
tuningFrequencyEdit_ = view__86;
view__49->addView(view__86);
auto* const view__87 = createValueButton(CRect(605, 95, 720, 120), kTagAbout, "About sfizz", kCenterText, 12);
settingsAboutButton_ = view__87;
view__49->addView(view__87);
auto* const view__88 = createLabel(CRect(285, 110, 430, 135), -1, "... when freewheeling", kLeftText, 12);
view__49->addView(view__88);
auto* const view__89 = createValueMenu(CRect(430, 110, 510, 135), kTagSetFreewheelingOscillatorQuality, "", kCenterText, 12);
freewheelingOscillatorQualitySlider_ = view__89;
view__49->addView(view__89);
auto* const view__90 = createPiano(CRect(5, 400, 795, 470), -1, "", kCenterText, 12);
piano_ = view__90;
view__0->addView(view__90);
auto* const view__91 = createLogicalGroup(CRect(5, 110, 795, 395), -1, "", kCenterText, 14);
subPanels_[kPanelGeneral] = view__91;
view__0->addView(view__91);
view__91->setVisible(false);
