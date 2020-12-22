/*
 * VTFEdit
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "stdafx.h"

namespace VTFEdit
{
	public ref class CVTFOptions : public System::Windows::Forms::Form
	{
	public:
		CVTFOptions(void)
		{
			this->InitializeComponent();

			this->btnReset_Click(this, System::EventArgs::Empty);
		}

	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ lblFormat;
	private: System::Windows::Forms::ComboBox^ cboFormat;
	private: System::Windows::Forms::CheckBox^ chkMipmaps;
	private: System::Windows::Forms::ComboBox^ cboMipmapFilter;
	private: System::Windows::Forms::Label^ lblMipmapFilter;
	private: System::Windows::Forms::CheckBox^ chkThumbnail;
	private: System::Windows::Forms::ComboBox^ cboTextureType;
	private: System::Windows::Forms::Label^ lblTextureType;
	private: System::Windows::Forms::CheckBox^ chkSphereMap;
	private: System::Windows::Forms::CheckBox^ chkReflectivity;
	private: System::Windows::Forms::CheckBox^ chkNormalMap;
	private: System::Windows::Forms::ComboBox^ cboKernelFilter;
	private: System::Windows::Forms::Label^ lblKernelFilter;
	private: System::Windows::Forms::ComboBox^ cboHeightSource;
	private: System::Windows::Forms::Label^ lblHeightSource;
	private: System::Windows::Forms::ComboBox^ cboAlphaResult;
	private: System::Windows::Forms::Label^ lblAlphaResult;
	private: System::Windows::Forms::ContextMenu^ mnuReset;
	private: System::Windows::Forms::MenuItem^ btnReset;
	private: System::Windows::Forms::GroupBox^ grpGeneral;
	private: System::Windows::Forms::GroupBox^ grpMipmaps;
	private: System::Windows::Forms::GroupBox^ grpNormalMap;
	private: System::Windows::Forms::GroupBox^ grpMiscellaneous;
	private: System::Windows::Forms::Label^ lblNormalScale;
	private: System::Windows::Forms::NumericUpDown^ numNormalScale;
	private: System::Windows::Forms::GroupBox^ grpGammaCorrection;
	private: System::Windows::Forms::CheckBox^ chkGammaCorrection;
	private: System::Windows::Forms::NumericUpDown^ numGammaCorrection;
	private: System::Windows::Forms::Label^ lblGammaCorrection;
	private: System::Windows::Forms::GroupBox^ grpResize;
	private: System::Windows::Forms::ComboBox^ cboResizeSharpenFilter;
	private: System::Windows::Forms::Label^ lblResizeSharpenFilter;
	private: System::Windows::Forms::ComboBox^ cboResizeFilter;
	private: System::Windows::Forms::Label^ lblResizeFilter;
	private: System::Windows::Forms::CheckBox^ chkResize;
	private: System::Windows::Forms::ComboBox^ cboResizeMethod;
	private: System::Windows::Forms::Label^ lblResizeMethod;
	private: System::Windows::Forms::CheckBox^ chkResizeClamp;
	private: System::Windows::Forms::ToolTip^ tipMain;
	private: System::Windows::Forms::ComboBox^ cboMipmapSharpenFilter;
	private: System::Windows::Forms::Label^ lblMipmapSharpenFilter;
	private: System::Windows::Forms::ComboBox^ cboMaximumWidth;
	private: System::Windows::Forms::Label^ lblMaximumWidth;
	private: System::Windows::Forms::ComboBox^ cboMaximumHeight;
	private: System::Windows::Forms::Label^ lblMaximumHeight;
	private: System::Windows::Forms::CheckBox^ chkNormalWrap;
	private: System::Windows::Forms::ComboBox^ cboAlphaFormat;
	private: System::Windows::Forms::Label^ lblAlphaFormat;
	private: System::Windows::Forms::GroupBox^ grpGeneralOptions;
	private: System::Windows::Forms::TabControl^ tabOptions;
	private: System::Windows::Forms::TabPage^ tabGeneral;
	private: System::Windows::Forms::TabPage^ tabAdvanced;
	private: System::Windows::Forms::GroupBox^ grpAdvancedOptions;
	private: System::Windows::Forms::GroupBox^ grpDXTCompression;
	private: System::Windows::Forms::ComboBox^ cboDXTQuality;
	private: System::Windows::Forms::Label^ lblDXTQuality;
	private: System::Windows::Forms::GroupBox^ grpUnsharpenMaskOptions;
	private: System::Windows::Forms::NumericUpDown^ numUnsharpenMaskRadius;
	private: System::Windows::Forms::Label^ lblUnsharpenMaskRadius;
	private: System::Windows::Forms::NumericUpDown^ numUnsharpenMaskAmount;
	private: System::Windows::Forms::Label^ lblUnsharpenMaskAmount;
	private: System::Windows::Forms::NumericUpDown^ numUnsharpenMaskThreshold;
	private: System::Windows::Forms::Label^ lblUnsharpenMaskThreshold;
	private: System::Windows::Forms::GroupBox^ grpXSharpenOptions;
	private: System::Windows::Forms::NumericUpDown^ numXSharpenThreshold;
	private: System::Windows::Forms::Label^ lblXSharpenThreshold;
	private: System::Windows::Forms::NumericUpDown^ numXSharpenStrength;
	private: System::Windows::Forms::Label^ lblXSharpenStrength;
	private: System::Windows::Forms::GroupBox^ grpLuminanceWeights;
	private: System::Windows::Forms::Label^ lblLuminanceWeightsB;
	private: System::Windows::Forms::NumericUpDown^ numLuminanceWeightsR;
	private: System::Windows::Forms::Label^ lblLuminanceWeightsR;
	private: System::Windows::Forms::NumericUpDown^ numLuminanceWeightsG;
	private: System::Windows::Forms::NumericUpDown^ numLuminanceWeightsB;
	private: System::Windows::Forms::GroupBox^ grpVersion;
	private: System::Windows::Forms::ComboBox^ cboVersion;
	private: System::Windows::Forms::Label^ lblVersion;
	private: System::Windows::Forms::TabPage^ tabResources;
	private: System::Windows::Forms::GroupBox^ grpResourceOptions;
	private: System::Windows::Forms::GroupBox^ grpLODControlResource;
	private: System::Windows::Forms::CheckBox^ chkCreateLODControlResource;
	private: System::Windows::Forms::Label^ lblLuminanceWeightsG;
	private: System::Windows::Forms::NumericUpDown^ numLODControlClampV;
	private: System::Windows::Forms::Label^ lblLODControlClampV;
	private: System::Windows::Forms::NumericUpDown^ numLODControlClampU;
	private: System::Windows::Forms::Label^ lblLODControlClampU;
	private: System::Windows::Forms::GroupBox^ grpInformationResource;
	private: System::Windows::Forms::Label^ lblInformationContact;
	private: System::Windows::Forms::Label^ lblInformationAuthor;
	private: System::Windows::Forms::CheckBox^ chkCreateInformationResource;
	private: System::Windows::Forms::TextBox^ txtInformationContact;
	private: System::Windows::Forms::TextBox^ txtInformationAuthor;
	private: System::Windows::Forms::TextBox^ txtInformationComments;
	private: System::Windows::Forms::TextBox^ txtInformationDescription;
	private: System::Windows::Forms::Label^ lblInformationComments;
	private: System::Windows::Forms::Label^ lblInformationDescription;
	private: System::Windows::Forms::TextBox^ txtInformationModification;
	private: System::Windows::Forms::TextBox^ txtInformationVersion;
	private: System::Windows::Forms::Label^ lblInformationModification;
	private: System::Windows::Forms::Label^ lblInformationVersion;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CVTFOptions::typeid));
			this->grpMiscellaneous = (gcnew System::Windows::Forms::GroupBox());
			this->mnuReset = (gcnew System::Windows::Forms::ContextMenu());
			this->btnReset = (gcnew System::Windows::Forms::MenuItem());
			this->chkReflectivity = (gcnew System::Windows::Forms::CheckBox());
			this->chkThumbnail = (gcnew System::Windows::Forms::CheckBox());
			this->chkSphereMap = (gcnew System::Windows::Forms::CheckBox());
			this->cboAlphaResult = (gcnew System::Windows::Forms::ComboBox());
			this->lblAlphaResult = (gcnew System::Windows::Forms::Label());
			this->cboHeightSource = (gcnew System::Windows::Forms::ComboBox());
			this->lblHeightSource = (gcnew System::Windows::Forms::Label());
			this->cboKernelFilter = (gcnew System::Windows::Forms::ComboBox());
			this->lblKernelFilter = (gcnew System::Windows::Forms::Label());
			this->chkNormalMap = (gcnew System::Windows::Forms::CheckBox());
			this->cboTextureType = (gcnew System::Windows::Forms::ComboBox());
			this->lblTextureType = (gcnew System::Windows::Forms::Label());
			this->cboMipmapSharpenFilter = (gcnew System::Windows::Forms::ComboBox());
			this->lblMipmapSharpenFilter = (gcnew System::Windows::Forms::Label());
			this->cboMipmapFilter = (gcnew System::Windows::Forms::ComboBox());
			this->lblMipmapFilter = (gcnew System::Windows::Forms::Label());
			this->chkMipmaps = (gcnew System::Windows::Forms::CheckBox());
			this->cboFormat = (gcnew System::Windows::Forms::ComboBox());
			this->lblFormat = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->grpGeneral = (gcnew System::Windows::Forms::GroupBox());
			this->cboAlphaFormat = (gcnew System::Windows::Forms::ComboBox());
			this->lblAlphaFormat = (gcnew System::Windows::Forms::Label());
			this->grpMipmaps = (gcnew System::Windows::Forms::GroupBox());
			this->grpNormalMap = (gcnew System::Windows::Forms::GroupBox());
			this->chkNormalWrap = (gcnew System::Windows::Forms::CheckBox());
			this->numNormalScale = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblNormalScale = (gcnew System::Windows::Forms::Label());
			this->grpGammaCorrection = (gcnew System::Windows::Forms::GroupBox());
			this->numGammaCorrection = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblGammaCorrection = (gcnew System::Windows::Forms::Label());
			this->chkGammaCorrection = (gcnew System::Windows::Forms::CheckBox());
			this->grpGeneralOptions = (gcnew System::Windows::Forms::GroupBox());
			this->grpResize = (gcnew System::Windows::Forms::GroupBox());
			this->cboMaximumHeight = (gcnew System::Windows::Forms::ComboBox());
			this->lblMaximumHeight = (gcnew System::Windows::Forms::Label());
			this->cboMaximumWidth = (gcnew System::Windows::Forms::ComboBox());
			this->lblMaximumWidth = (gcnew System::Windows::Forms::Label());
			this->chkResizeClamp = (gcnew System::Windows::Forms::CheckBox());
			this->cboResizeMethod = (gcnew System::Windows::Forms::ComboBox());
			this->lblResizeMethod = (gcnew System::Windows::Forms::Label());
			this->cboResizeSharpenFilter = (gcnew System::Windows::Forms::ComboBox());
			this->lblResizeSharpenFilter = (gcnew System::Windows::Forms::Label());
			this->cboResizeFilter = (gcnew System::Windows::Forms::ComboBox());
			this->lblResizeFilter = (gcnew System::Windows::Forms::Label());
			this->chkResize = (gcnew System::Windows::Forms::CheckBox());
			this->tipMain = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->cboDXTQuality = (gcnew System::Windows::Forms::ComboBox());
			this->numUnsharpenMaskRadius = (gcnew System::Windows::Forms::NumericUpDown());
			this->numUnsharpenMaskAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->cboVersion = (gcnew System::Windows::Forms::ComboBox());
			this->chkCreateLODControlResource = (gcnew System::Windows::Forms::CheckBox());
			this->chkCreateInformationResource = (gcnew System::Windows::Forms::CheckBox());
			this->numLuminanceWeightsR = (gcnew System::Windows::Forms::NumericUpDown());
			this->numLuminanceWeightsG = (gcnew System::Windows::Forms::NumericUpDown());
			this->numLuminanceWeightsB = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabOptions = (gcnew System::Windows::Forms::TabControl());
			this->tabGeneral = (gcnew System::Windows::Forms::TabPage());
			this->tabAdvanced = (gcnew System::Windows::Forms::TabPage());
			this->grpAdvancedOptions = (gcnew System::Windows::Forms::GroupBox());
			this->grpVersion = (gcnew System::Windows::Forms::GroupBox());
			this->lblVersion = (gcnew System::Windows::Forms::Label());
			this->grpLuminanceWeights = (gcnew System::Windows::Forms::GroupBox());
			this->lblLuminanceWeightsB = (gcnew System::Windows::Forms::Label());
			this->lblLuminanceWeightsG = (gcnew System::Windows::Forms::Label());
			this->lblLuminanceWeightsR = (gcnew System::Windows::Forms::Label());
			this->grpUnsharpenMaskOptions = (gcnew System::Windows::Forms::GroupBox());
			this->numUnsharpenMaskThreshold = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblUnsharpenMaskThreshold = (gcnew System::Windows::Forms::Label());
			this->lblUnsharpenMaskAmount = (gcnew System::Windows::Forms::Label());
			this->lblUnsharpenMaskRadius = (gcnew System::Windows::Forms::Label());
			this->grpDXTCompression = (gcnew System::Windows::Forms::GroupBox());
			this->lblDXTQuality = (gcnew System::Windows::Forms::Label());
			this->grpXSharpenOptions = (gcnew System::Windows::Forms::GroupBox());
			this->numXSharpenThreshold = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblXSharpenThreshold = (gcnew System::Windows::Forms::Label());
			this->numXSharpenStrength = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblXSharpenStrength = (gcnew System::Windows::Forms::Label());
			this->tabResources = (gcnew System::Windows::Forms::TabPage());
			this->grpResourceOptions = (gcnew System::Windows::Forms::GroupBox());
			this->grpInformationResource = (gcnew System::Windows::Forms::GroupBox());
			this->txtInformationComments = (gcnew System::Windows::Forms::TextBox());
			this->txtInformationDescription = (gcnew System::Windows::Forms::TextBox());
			this->lblInformationComments = (gcnew System::Windows::Forms::Label());
			this->lblInformationDescription = (gcnew System::Windows::Forms::Label());
			this->txtInformationModification = (gcnew System::Windows::Forms::TextBox());
			this->txtInformationVersion = (gcnew System::Windows::Forms::TextBox());
			this->lblInformationModification = (gcnew System::Windows::Forms::Label());
			this->lblInformationVersion = (gcnew System::Windows::Forms::Label());
			this->txtInformationContact = (gcnew System::Windows::Forms::TextBox());
			this->txtInformationAuthor = (gcnew System::Windows::Forms::TextBox());
			this->lblInformationContact = (gcnew System::Windows::Forms::Label());
			this->lblInformationAuthor = (gcnew System::Windows::Forms::Label());
			this->grpLODControlResource = (gcnew System::Windows::Forms::GroupBox());
			this->numLODControlClampV = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblLODControlClampV = (gcnew System::Windows::Forms::Label());
			this->numLODControlClampU = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblLODControlClampU = (gcnew System::Windows::Forms::Label());
			this->grpMiscellaneous->SuspendLayout();
			this->grpGeneral->SuspendLayout();
			this->grpMipmaps->SuspendLayout();
			this->grpNormalMap->SuspendLayout();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNormalScale))->BeginInit();
			this->grpGammaCorrection->SuspendLayout();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numGammaCorrection))->BeginInit();
			this->grpGeneralOptions->SuspendLayout();
			this->grpResize->SuspendLayout();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUnsharpenMaskRadius))->BeginInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUnsharpenMaskAmount))->BeginInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLuminanceWeightsR))->BeginInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLuminanceWeightsG))->BeginInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLuminanceWeightsB))->BeginInit();
			this->tabOptions->SuspendLayout();
			this->tabGeneral->SuspendLayout();
			this->tabAdvanced->SuspendLayout();
			this->grpAdvancedOptions->SuspendLayout();
			this->grpVersion->SuspendLayout();
			this->grpLuminanceWeights->SuspendLayout();
			this->grpUnsharpenMaskOptions->SuspendLayout();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUnsharpenMaskThreshold))->BeginInit();
			this->grpDXTCompression->SuspendLayout();
			this->grpXSharpenOptions->SuspendLayout();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numXSharpenThreshold))->BeginInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numXSharpenStrength))->BeginInit();
			this->tabResources->SuspendLayout();
			this->grpResourceOptions->SuspendLayout();
			this->grpInformationResource->SuspendLayout();
			this->grpLODControlResource->SuspendLayout();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLODControlClampV))->BeginInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLODControlClampU))->BeginInit();
			this->SuspendLayout();
			// 
			// grpMiscellaneous
			// 
			this->grpMiscellaneous->ContextMenu = this->mnuReset;
			this->grpMiscellaneous->Controls->Add(this->chkReflectivity);
			this->grpMiscellaneous->Controls->Add(this->chkThumbnail);
			this->grpMiscellaneous->Controls->Add(this->chkSphereMap);
			this->grpMiscellaneous->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpMiscellaneous->Location = System::Drawing::Point(8, 168);
			this->grpMiscellaneous->Name = "grpMiscellaneous";
			this->grpMiscellaneous->Size = System::Drawing::Size(272, 96);
			this->grpMiscellaneous->TabIndex = 1;
			this->grpMiscellaneous->TabStop = false;
			this->grpMiscellaneous->Text = "Miscellaneous:";
			// 
			// mnuReset
			// 
			array< System::Windows::Forms::MenuItem^>^ __mcTemp__1 = gcnew array< System::Windows::Forms::MenuItem^>(1);
			__mcTemp__1[0] = this->btnReset;
			this->mnuReset->MenuItems->AddRange(__mcTemp__1);
			// 
			// btnReset
			// 
			this->btnReset->Index = 0;
			this->btnReset->Text = "&Reset";
			this->btnReset->Click += gcnew System::EventHandler(this, &CVTFOptions::btnReset_Click);
			// 
			// chkReflectivity
			// 
			this->chkReflectivity->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkReflectivity->Location = System::Drawing::Point(8, 16);
			this->chkReflectivity->Name = "chkReflectivity";
			this->chkReflectivity->Size = System::Drawing::Size(256, 24);
			this->chkReflectivity->TabIndex = 0;
			this->chkReflectivity->Text = "Compute Reflectivity";
			this->tipMain->SetToolTip(this->chkReflectivity, "Compute input image reflectivity.");
			// 
			// chkThumbnail
			// 
			this->chkThumbnail->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkThumbnail->Location = System::Drawing::Point(8, 40);
			this->chkThumbnail->Name = "chkThumbnail";
			this->chkThumbnail->Size = System::Drawing::Size(256, 24);
			this->chkThumbnail->TabIndex = 1;
			this->chkThumbnail->Text = "Generate Thumbnail";
			this->tipMain->SetToolTip(this->chkThumbnail, "Generate a thumbnail image off of the mipmaps.  The Source engine uses this thumb"
				"nail for image color sampling.");
			// 
			// chkSphereMap
			// 
			this->chkSphereMap->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkSphereMap->Location = System::Drawing::Point(8, 64);
			this->chkSphereMap->Name = "chkSphereMap";
			this->chkSphereMap->Size = System::Drawing::Size(256, 20);
			this->chkSphereMap->TabIndex = 2;
			this->chkSphereMap->Text = "Generate Sphere Map";
			this->tipMain->SetToolTip(this->chkSphereMap, "Generate a sphere map off of the six cube map faces.");
			// 
			// cboAlphaResult
			// 
			this->cboAlphaResult->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__2 = gcnew array<System::Object^>(4);
			__mcTemp__2[0] = "No Change";
			__mcTemp__2[1] = "Set To Height";
			__mcTemp__2[2] = "Set To Black";
			__mcTemp__2[3] = "Set To White";
			this->cboAlphaResult->Items->AddRange(__mcTemp__2);
			this->cboAlphaResult->Location = System::Drawing::Point(104, 96);
			this->cboAlphaResult->Name = "cboAlphaResult";
			this->cboAlphaResult->Size = System::Drawing::Size(160, 21);
			this->cboAlphaResult->TabIndex = 6;
			this->tipMain->SetToolTip(this->cboAlphaResult, "What to do with the alpha channel after generation.");
			// 
			// lblAlphaResult
			// 
			this->lblAlphaResult->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblAlphaResult->Location = System::Drawing::Point(8, 96);
			this->lblAlphaResult->Name = "lblAlphaResult";
			this->lblAlphaResult->Size = System::Drawing::Size(88, 16);
			this->lblAlphaResult->TabIndex = 5;
			this->lblAlphaResult->Text = "Alpha Result:";
			// 
			// cboHeightSource
			// 
			this->cboHeightSource->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__3 = gcnew array<System::Object^>(8);
			__mcTemp__3[0] = "Alpha Channel";
			__mcTemp__3[1] = "Average RGB";
			__mcTemp__3[2] = "Biased RGB";
			__mcTemp__3[3] = "Red Channel";
			__mcTemp__3[4] = "Green  Channel";
			__mcTemp__3[5] = "Blue  Channel";
			__mcTemp__3[6] = "Max RGB";
			__mcTemp__3[7] = "Colorspace";
			this->cboHeightSource->Items->AddRange(__mcTemp__3);
			this->cboHeightSource->Location = System::Drawing::Point(104, 72);
			this->cboHeightSource->Name = "cboHeightSource";
			this->cboHeightSource->Size = System::Drawing::Size(160, 21);
			this->cboHeightSource->TabIndex = 4;
			this->tipMain->SetToolTip(this->cboHeightSource, "The method used to calculate the input image\'s height map.");
			// 
			// lblHeightSource
			// 
			this->lblHeightSource->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblHeightSource->Location = System::Drawing::Point(8, 72);
			this->lblHeightSource->Name = "lblHeightSource";
			this->lblHeightSource->Size = System::Drawing::Size(88, 16);
			this->lblHeightSource->TabIndex = 3;
			this->lblHeightSource->Text = "Height Source:";
			// 
			// cboKernelFilter
			// 
			this->cboKernelFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__4 = gcnew array<System::Object^>(6);
			__mcTemp__4[0] = "4 Sample";
			__mcTemp__4[1] = "3x3";
			__mcTemp__4[2] = "5x5";
			__mcTemp__4[3] = "7x7";
			__mcTemp__4[4] = "9x9";
			__mcTemp__4[5] = "DuDv";
			this->cboKernelFilter->Items->AddRange(__mcTemp__4);
			this->cboKernelFilter->Location = System::Drawing::Point(104, 48);
			this->cboKernelFilter->Name = "cboKernelFilter";
			this->cboKernelFilter->Size = System::Drawing::Size(160, 21);
			this->cboKernelFilter->TabIndex = 2;
			this->tipMain->SetToolTip(this->cboKernelFilter, "The kernel for generating the normal map.");
			// 
			// lblKernelFilter
			// 
			this->lblKernelFilter->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblKernelFilter->Location = System::Drawing::Point(8, 48);
			this->lblKernelFilter->Name = "lblKernelFilter";
			this->lblKernelFilter->Size = System::Drawing::Size(88, 16);
			this->lblKernelFilter->TabIndex = 1;
			this->lblKernelFilter->Text = "Kernel Filter:";
			// 
			// chkNormalMap
			// 
			this->chkNormalMap->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkNormalMap->Location = System::Drawing::Point(8, 16);
			this->chkNormalMap->Name = "chkNormalMap";
			this->chkNormalMap->Size = System::Drawing::Size(256, 24);
			this->chkNormalMap->TabIndex = 0;
			this->chkNormalMap->Text = "Generate Normal Map";
			this->tipMain->SetToolTip(this->chkNormalMap, "Convert input image to a normal map.");
			this->chkNormalMap->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkNormalMap_CheckedChanged);
			// 
			// cboTextureType
			// 
			this->cboTextureType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__5 = gcnew array<System::Object^>(3);
			__mcTemp__5[0] = "Animated Texture";
			__mcTemp__5[1] = "Environment Map";
			__mcTemp__5[2] = "Volume Texture";
			this->cboTextureType->Items->AddRange(__mcTemp__5);
			this->cboTextureType->Location = System::Drawing::Point(104, 72);
			this->cboTextureType->Name = "cboTextureType";
			this->cboTextureType->Size = System::Drawing::Size(160, 21);
			this->cboTextureType->TabIndex = 5;
			this->tipMain->SetToolTip(this->cboTextureType, "The output image type.");
			this->cboTextureType->SelectedIndexChanged += gcnew System::EventHandler(this, &CVTFOptions::cboTextureType_SelectedIndexChanged);
			// 
			// lblTextureType
			// 
			this->lblTextureType->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblTextureType->Location = System::Drawing::Point(8, 72);
			this->lblTextureType->Name = "lblTextureType";
			this->lblTextureType->Size = System::Drawing::Size(88, 16);
			this->lblTextureType->TabIndex = 4;
			this->lblTextureType->Text = "Texture Type:";
			// 
			// cboMipmapSharpenFilter
			// 
			this->cboMipmapSharpenFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__6 = gcnew array<System::Object^>(19);
			__mcTemp__6[0] = "None";
			__mcTemp__6[1] = "Negative";
			__mcTemp__6[2] = "Lighter";
			__mcTemp__6[3] = "Darker";
			__mcTemp__6[4] = "Contrast More";
			__mcTemp__6[5] = "Contrast Less";
			__mcTemp__6[6] = "Smoothen";
			__mcTemp__6[7] = "Sharpen Soft";
			__mcTemp__6[8] = "Sharpen Medium";
			__mcTemp__6[9] = "Sharpen Strong";
			__mcTemp__6[10] = "Find Edges";
			__mcTemp__6[11] = "Contour";
			__mcTemp__6[12] = "Edge Detect";
			__mcTemp__6[13] = "Edge Detect Soft";
			__mcTemp__6[14] = "Emboss";
			__mcTemp__6[15] = "Mean Removal";
			__mcTemp__6[16] = "Unsharpen Mask";
			__mcTemp__6[17] = "XSharpen";
			__mcTemp__6[18] = "Wrap Sharp";
			this->cboMipmapSharpenFilter->Items->AddRange(__mcTemp__6);
			this->cboMipmapSharpenFilter->Location = System::Drawing::Point(104, 72);
			this->cboMipmapSharpenFilter->Name = "cboMipmapSharpenFilter";
			this->cboMipmapSharpenFilter->Size = System::Drawing::Size(160, 21);
			this->cboMipmapSharpenFilter->TabIndex = 4;
			this->tipMain->SetToolTip(this->cboMipmapSharpenFilter, "The filter for sharpening image data.");
			// 
			// lblMipmapSharpenFilter
			// 
			this->lblMipmapSharpenFilter->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblMipmapSharpenFilter->Location = System::Drawing::Point(8, 72);
			this->lblMipmapSharpenFilter->Name = "lblMipmapSharpenFilter";
			this->lblMipmapSharpenFilter->Size = System::Drawing::Size(88, 16);
			this->lblMipmapSharpenFilter->TabIndex = 3;
			this->lblMipmapSharpenFilter->Text = "Sharpen Filter:";
			// 
			// cboMipmapFilter
			// 
			this->cboMipmapFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__7 = gcnew array<System::Object^>(14);
			__mcTemp__7[0] = "Point";
			__mcTemp__7[1] = "Box";
			__mcTemp__7[2] = "Triangle";
			__mcTemp__7[3] = "Quadratic";
			__mcTemp__7[4] = "Cubic";
			__mcTemp__7[5] = "Catrom";
			__mcTemp__7[6] = "Mitchell";
			__mcTemp__7[7] = "Gaussian";
			__mcTemp__7[8] = "Sine Cardinal";
			__mcTemp__7[9] = "Bessel";
			__mcTemp__7[10] = "Hanning";
			__mcTemp__7[11] = "Hamming";
			__mcTemp__7[12] = "Blackman";
			__mcTemp__7[13] = "Kaiser";
			this->cboMipmapFilter->Items->AddRange(__mcTemp__7);
			this->cboMipmapFilter->Location = System::Drawing::Point(104, 48);
			this->cboMipmapFilter->Name = "cboMipmapFilter";
			this->cboMipmapFilter->Size = System::Drawing::Size(160, 21);
			this->cboMipmapFilter->TabIndex = 2;
			this->tipMain->SetToolTip(this->cboMipmapFilter, "The filter for resampling image data.");
			// 
			// lblMipmapFilter
			// 
			this->lblMipmapFilter->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblMipmapFilter->Location = System::Drawing::Point(8, 48);
			this->lblMipmapFilter->Name = "lblMipmapFilter";
			this->lblMipmapFilter->Size = System::Drawing::Size(88, 16);
			this->lblMipmapFilter->TabIndex = 1;
			this->lblMipmapFilter->Text = "Mipmap Filter:";
			// 
			// chkMipmaps
			// 
			this->chkMipmaps->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkMipmaps->Location = System::Drawing::Point(8, 16);
			this->chkMipmaps->Name = "chkMipmaps";
			this->chkMipmaps->Size = System::Drawing::Size(256, 24);
			this->chkMipmaps->TabIndex = 0;
			this->chkMipmaps->Text = "Generate Mipmaps";
			this->tipMain->SetToolTip(this->chkMipmaps, "Generate mipmaps. Without mipmaps your texture will have no LOD scaling, but will"
				" also be smaller (memory wise).");
			this->chkMipmaps->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkMipmaps_CheckedChanged);
			// 
			// cboFormat
			// 
			this->cboFormat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__8 = gcnew array<System::Object^>(27);
			__mcTemp__8[0] = "RGBA8888";
			__mcTemp__8[1] = "ABGR8888";
			__mcTemp__8[2] = "RGB888";
			__mcTemp__8[3] = "BGR888";
			__mcTemp__8[4] = "RGB565";
			__mcTemp__8[5] = "I8";
			__mcTemp__8[6] = "IA88";
			__mcTemp__8[7] = "P8 (Not supported)";
			__mcTemp__8[8] = "A8";
			__mcTemp__8[9] = "RGB888 Bluescreen";
			__mcTemp__8[10] = "BGR888 Bluescreen";
			__mcTemp__8[11] = "ARGB8888";
			__mcTemp__8[12] = "BGRA8888";
			__mcTemp__8[13] = "DXT1";
			__mcTemp__8[14] = "DXT3";
			__mcTemp__8[15] = "DXT5";
			__mcTemp__8[16] = "BGRX8888";
			__mcTemp__8[17] = "BGR565";
			__mcTemp__8[18] = "BGRX5551";
			__mcTemp__8[19] = "BGRA4444";
			__mcTemp__8[20] = "DXT1 With One Bit Alpha";
			__mcTemp__8[21] = "BGRA5551";
			__mcTemp__8[22] = "UV88";
			__mcTemp__8[23] = "UVWQ8888";
			__mcTemp__8[24] = "RGBA16161616F";
			__mcTemp__8[25] = "RGBA16161616";
			__mcTemp__8[26] = "UVLX8888";
			this->cboFormat->Items->AddRange(__mcTemp__8);
			this->cboFormat->Location = System::Drawing::Point(104, 24);
			this->cboFormat->Name = "cboFormat";
			this->cboFormat->Size = System::Drawing::Size(160, 21);
			this->cboFormat->TabIndex = 1;
			this->tipMain->SetToolTip(this->cboFormat, "The output image format for textures with no alpha channel. Common values are DXT"
				"1, BGR888 and UV88.");
			// 
			// lblFormat
			// 
			this->lblFormat->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblFormat->Location = System::Drawing::Point(8, 24);
			this->lblFormat->Name = "lblFormat";
			this->lblFormat->Size = System::Drawing::Size(88, 16);
			this->lblFormat->TabIndex = 0;
			this->lblFormat->Text = "Normal Format:";
			// 
			// btnOK
			// 
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnOK->Location = System::Drawing::Point(432, 400);
			this->btnOK->Name = "btnOK";
			this->btnOK->Size = System::Drawing::Size(80, 23);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = "&OK";
			this->btnOK->Click += gcnew System::EventHandler(this, &CVTFOptions::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnCancel->Location = System::Drawing::Point(520, 400);
			this->btnCancel->Name = "btnCancel";
			this->btnCancel->Size = System::Drawing::Size(80, 23);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = "&Cancel";
			this->btnCancel->Click += gcnew System::EventHandler(this, &CVTFOptions::btnCancel_Click);
			// 
			// grpGeneral
			// 
			this->grpGeneral->ContextMenu = this->mnuReset;
			this->grpGeneral->Controls->Add(this->cboAlphaFormat);
			this->grpGeneral->Controls->Add(this->lblAlphaFormat);
			this->grpGeneral->Controls->Add(this->cboFormat);
			this->grpGeneral->Controls->Add(this->lblFormat);
			this->grpGeneral->Controls->Add(this->cboTextureType);
			this->grpGeneral->Controls->Add(this->lblTextureType);
			this->grpGeneral->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpGeneral->Location = System::Drawing::Point(8, 16);
			this->grpGeneral->Name = "grpGeneral";
			this->grpGeneral->Size = System::Drawing::Size(272, 104);
			this->grpGeneral->TabIndex = 0;
			this->grpGeneral->TabStop = false;
			this->grpGeneral->Text = "General:";
			// 
			// cboAlphaFormat
			// 
			this->cboAlphaFormat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__9 = gcnew array<System::Object^>(27);
			__mcTemp__9[0] = "RGBA8888";
			__mcTemp__9[1] = "ABGR8888";
			__mcTemp__9[2] = "RGB888";
			__mcTemp__9[3] = "BGR888";
			__mcTemp__9[4] = "RGB565";
			__mcTemp__9[5] = "I8";
			__mcTemp__9[6] = "IA88";
			__mcTemp__9[7] = "P8 (Not supported)";
			__mcTemp__9[8] = "A8";
			__mcTemp__9[9] = "RGB888 Bluescreen";
			__mcTemp__9[10] = "BGR888 Bluescreen";
			__mcTemp__9[11] = "ARGB8888";
			__mcTemp__9[12] = "BGRA8888";
			__mcTemp__9[13] = "DXT1";
			__mcTemp__9[14] = "DXT3";
			__mcTemp__9[15] = "DXT5";
			__mcTemp__9[16] = "BGRX8888";
			__mcTemp__9[17] = "BGR565";
			__mcTemp__9[18] = "BGRX5551";
			__mcTemp__9[19] = "BGRA4444";
			__mcTemp__9[20] = "DXT1 With One Bit Alpha";
			__mcTemp__9[21] = "BGRA5551";
			__mcTemp__9[22] = "UV88";
			__mcTemp__9[23] = "UVWQ8888";
			__mcTemp__9[24] = "RGBA16161616F";
			__mcTemp__9[25] = "RGBA16161616";
			__mcTemp__9[26] = "UVLX8888";
			this->cboAlphaFormat->Items->AddRange(__mcTemp__9);
			this->cboAlphaFormat->Location = System::Drawing::Point(104, 48);
			this->cboAlphaFormat->Name = "cboAlphaFormat";
			this->cboAlphaFormat->Size = System::Drawing::Size(160, 21);
			this->cboAlphaFormat->TabIndex = 3;
			this->tipMain->SetToolTip(this->cboAlphaFormat, "The output image format for textures with an alpha channel. Common values are DXT"
				"5 and BGRA888.");
			// 
			// lblAlphaFormat
			// 
			this->lblAlphaFormat->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblAlphaFormat->Location = System::Drawing::Point(8, 48);
			this->lblAlphaFormat->Name = "lblAlphaFormat";
			this->lblAlphaFormat->Size = System::Drawing::Size(88, 16);
			this->lblAlphaFormat->TabIndex = 2;
			this->lblAlphaFormat->Text = "Alpha Format:";
			// 
			// grpMipmaps
			// 
			this->grpMipmaps->ContextMenu = this->mnuReset;
			this->grpMipmaps->Controls->Add(this->cboMipmapSharpenFilter);
			this->grpMipmaps->Controls->Add(this->lblMipmapSharpenFilter);
			this->grpMipmaps->Controls->Add(this->cboMipmapFilter);
			this->grpMipmaps->Controls->Add(this->lblMipmapFilter);
			this->grpMipmaps->Controls->Add(this->chkMipmaps);
			this->grpMipmaps->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpMipmaps->Location = System::Drawing::Point(288, 16);
			this->grpMipmaps->Name = "grpMipmaps";
			this->grpMipmaps->Size = System::Drawing::Size(272, 104);
			this->grpMipmaps->TabIndex = 2;
			this->grpMipmaps->TabStop = false;
			this->grpMipmaps->Text = "Mipmaps:";
			// 
			// grpNormalMap
			// 
			this->grpNormalMap->ContextMenu = this->mnuReset;
			this->grpNormalMap->Controls->Add(this->chkNormalWrap);
			this->grpNormalMap->Controls->Add(this->numNormalScale);
			this->grpNormalMap->Controls->Add(this->lblNormalScale);
			this->grpNormalMap->Controls->Add(this->chkNormalMap);
			this->grpNormalMap->Controls->Add(this->lblKernelFilter);
			this->grpNormalMap->Controls->Add(this->cboKernelFilter);
			this->grpNormalMap->Controls->Add(this->lblHeightSource);
			this->grpNormalMap->Controls->Add(this->cboHeightSource);
			this->grpNormalMap->Controls->Add(this->lblAlphaResult);
			this->grpNormalMap->Controls->Add(this->cboAlphaResult);
			this->grpNormalMap->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpNormalMap->Location = System::Drawing::Point(288, 128);
			this->grpNormalMap->Name = "grpNormalMap";
			this->grpNormalMap->Size = System::Drawing::Size(272, 176);
			this->grpNormalMap->TabIndex = 3;
			this->grpNormalMap->TabStop = false;
			this->grpNormalMap->Text = "Normal Map:";
			// 
			// chkNormalWrap
			// 
			this->chkNormalWrap->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkNormalWrap->Location = System::Drawing::Point(8, 144);
			this->chkNormalWrap->Name = "chkNormalWrap";
			this->chkNormalWrap->Size = System::Drawing::Size(256, 24);
			this->chkNormalWrap->TabIndex = 9;
			this->chkNormalWrap->Text = "Wrap Normal Map";
			this->tipMain->SetToolTip(this->chkNormalWrap, "Wrap normal map.  Aligns edges for tiled textures.");
			// 
			// numNormalScale
			// 
			this->numNormalScale->DecimalPlaces = 2;
			array<System::Int32>^ __mcTemp__10 = gcnew array<System::Int32>(4);
			__mcTemp__10[0] = 5;
			__mcTemp__10[1] = 0;
			__mcTemp__10[2] = 0;
			__mcTemp__10[3] = 131072;
			this->numNormalScale->Increment = System::Decimal(__mcTemp__10);
			this->numNormalScale->Location = System::Drawing::Point(104, 120);
			this->numNormalScale->Name = "numNormalScale";
			this->numNormalScale->Size = System::Drawing::Size(160, 20);
			this->numNormalScale->TabIndex = 8;
			this->tipMain->SetToolTip(this->numNormalScale, "The value to scale the height map by.");
			// 
			// lblNormalScale
			// 
			this->lblNormalScale->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblNormalScale->Location = System::Drawing::Point(8, 120);
			this->lblNormalScale->Name = "lblNormalScale";
			this->lblNormalScale->Size = System::Drawing::Size(88, 16);
			this->lblNormalScale->TabIndex = 7;
			this->lblNormalScale->Text = "Scale:";
			// 
			// grpGammaCorrection
			// 
			this->grpGammaCorrection->ContextMenu = this->mnuReset;
			this->grpGammaCorrection->Controls->Add(this->numGammaCorrection);
			this->grpGammaCorrection->Controls->Add(this->lblGammaCorrection);
			this->grpGammaCorrection->Controls->Add(this->chkGammaCorrection);
			this->grpGammaCorrection->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpGammaCorrection->Location = System::Drawing::Point(8, 80);
			this->grpGammaCorrection->Name = "grpGammaCorrection";
			this->grpGammaCorrection->Size = System::Drawing::Size(272, 80);
			this->grpGammaCorrection->TabIndex = 3;
			this->grpGammaCorrection->TabStop = false;
			this->grpGammaCorrection->Text = "Gamma Correction:";
			// 
			// numGammaCorrection
			// 
			this->numGammaCorrection->DecimalPlaces = 2;
			array<System::Int32>^ __mcTemp__11 = gcnew array<System::Int32>(4);
			__mcTemp__11[0] = 5;
			__mcTemp__11[1] = 0;
			__mcTemp__11[2] = 0;
			__mcTemp__11[3] = 131072;
			this->numGammaCorrection->Increment = System::Decimal(__mcTemp__11);
			this->numGammaCorrection->Location = System::Drawing::Point(104, 48);
			this->numGammaCorrection->Name = "numGammaCorrection";
			this->numGammaCorrection->Size = System::Drawing::Size(160, 20);
			this->numGammaCorrection->TabIndex = 2;
			this->tipMain->SetToolTip(this->numGammaCorrection, "The amount of gamma correction to apply.");
			// 
			// lblGammaCorrection
			// 
			this->lblGammaCorrection->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblGammaCorrection->Location = System::Drawing::Point(8, 48);
			this->lblGammaCorrection->Name = "lblGammaCorrection";
			this->lblGammaCorrection->Size = System::Drawing::Size(88, 16);
			this->lblGammaCorrection->TabIndex = 1;
			this->lblGammaCorrection->Text = "Correction:";
			// 
			// chkGammaCorrection
			// 
			this->chkGammaCorrection->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkGammaCorrection->Location = System::Drawing::Point(8, 16);
			this->chkGammaCorrection->Name = "chkGammaCorrection";
			this->chkGammaCorrection->Size = System::Drawing::Size(256, 24);
			this->chkGammaCorrection->TabIndex = 0;
			this->chkGammaCorrection->Text = "Correct Gamma";
			this->tipMain->SetToolTip(this->chkGammaCorrection, "Correct input image gamma.");
			this->chkGammaCorrection->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkGammaCorrection_CheckedChanged);
			// 
			// grpGeneralOptions
			// 
			this->grpGeneralOptions->Controls->Add(this->grpResize);
			this->grpGeneralOptions->Controls->Add(this->grpGeneral);
			this->grpGeneralOptions->Controls->Add(this->grpMipmaps);
			this->grpGeneralOptions->Controls->Add(this->grpNormalMap);
			this->grpGeneralOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpGeneralOptions->Location = System::Drawing::Point(8, 8);
			this->grpGeneralOptions->Name = "grpGeneralOptions";
			this->grpGeneralOptions->Size = System::Drawing::Size(568, 344);
			this->grpGeneralOptions->TabIndex = 2;
			this->grpGeneralOptions->TabStop = false;
			this->grpGeneralOptions->Text = "General Options:";
			// 
			// grpResize
			// 
			this->grpResize->ContextMenu = this->mnuReset;
			this->grpResize->Controls->Add(this->cboMaximumHeight);
			this->grpResize->Controls->Add(this->lblMaximumHeight);
			this->grpResize->Controls->Add(this->cboMaximumWidth);
			this->grpResize->Controls->Add(this->lblMaximumWidth);
			this->grpResize->Controls->Add(this->chkResizeClamp);
			this->grpResize->Controls->Add(this->cboResizeMethod);
			this->grpResize->Controls->Add(this->lblResizeMethod);
			this->grpResize->Controls->Add(this->cboResizeSharpenFilter);
			this->grpResize->Controls->Add(this->lblResizeSharpenFilter);
			this->grpResize->Controls->Add(this->cboResizeFilter);
			this->grpResize->Controls->Add(this->lblResizeFilter);
			this->grpResize->Controls->Add(this->chkResize);
			this->grpResize->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpResize->Location = System::Drawing::Point(8, 128);
			this->grpResize->Name = "grpResize";
			this->grpResize->Size = System::Drawing::Size(272, 208);
			this->grpResize->TabIndex = 1;
			this->grpResize->TabStop = false;
			this->grpResize->Text = "Resize:";
			// 
			// cboMaximumHeight
			// 
			this->cboMaximumHeight->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__12 = gcnew array<System::Object^>(13);
			__mcTemp__12[0] = "1";
			__mcTemp__12[1] = "2";
			__mcTemp__12[2] = "4";
			__mcTemp__12[3] = "8";
			__mcTemp__12[4] = "16";
			__mcTemp__12[5] = "32";
			__mcTemp__12[6] = "64";
			__mcTemp__12[7] = "128";
			__mcTemp__12[8] = "256";
			__mcTemp__12[9] = "512";
			__mcTemp__12[10] = "1024";
			__mcTemp__12[11] = "2048";
			__mcTemp__12[12] = "4096";
			this->cboMaximumHeight->Items->AddRange(__mcTemp__12);
			this->cboMaximumHeight->Location = System::Drawing::Point(104, 176);
			this->cboMaximumHeight->Name = "cboMaximumHeight";
			this->cboMaximumHeight->Size = System::Drawing::Size(160, 21);
			this->cboMaximumHeight->TabIndex = 11;
			this->tipMain->SetToolTip(this->cboMaximumHeight, "Maximum height.");
			// 
			// lblMaximumHeight
			// 
			this->lblMaximumHeight->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblMaximumHeight->Location = System::Drawing::Point(8, 176);
			this->lblMaximumHeight->Name = "lblMaximumHeight";
			this->lblMaximumHeight->Size = System::Drawing::Size(88, 16);
			this->lblMaximumHeight->TabIndex = 10;
			this->lblMaximumHeight->Text = "Maximum Height:";
			// 
			// cboMaximumWidth
			// 
			this->cboMaximumWidth->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__13 = gcnew array<System::Object^>(13);
			__mcTemp__13[0] = "1";
			__mcTemp__13[1] = "2";
			__mcTemp__13[2] = "4";
			__mcTemp__13[3] = "8";
			__mcTemp__13[4] = "16";
			__mcTemp__13[5] = "32";
			__mcTemp__13[6] = "64";
			__mcTemp__13[7] = "128";
			__mcTemp__13[8] = "256";
			__mcTemp__13[9] = "512";
			__mcTemp__13[10] = "1024";
			__mcTemp__13[11] = "2048";
			__mcTemp__13[12] = "4096";
			this->cboMaximumWidth->Items->AddRange(__mcTemp__13);
			this->cboMaximumWidth->Location = System::Drawing::Point(104, 152);
			this->cboMaximumWidth->Name = "cboMaximumWidth";
			this->cboMaximumWidth->Size = System::Drawing::Size(160, 21);
			this->cboMaximumWidth->TabIndex = 9;
			this->tipMain->SetToolTip(this->cboMaximumWidth, "Maximum width.");
			// 
			// lblMaximumWidth
			// 
			this->lblMaximumWidth->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblMaximumWidth->Location = System::Drawing::Point(8, 152);
			this->lblMaximumWidth->Name = "lblMaximumWidth";
			this->lblMaximumWidth->Size = System::Drawing::Size(88, 16);
			this->lblMaximumWidth->TabIndex = 8;
			this->lblMaximumWidth->Text = "Maximum Width:";
			// 
			// chkResizeClamp
			// 
			this->chkResizeClamp->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkResizeClamp->Location = System::Drawing::Point(8, 120);
			this->chkResizeClamp->Name = "chkResizeClamp";
			this->chkResizeClamp->Size = System::Drawing::Size(256, 24);
			this->chkResizeClamp->TabIndex = 7;
			this->chkResizeClamp->Text = "Clamp";
			this->tipMain->SetToolTip(this->chkResizeClamp, "Clamp the resized image\'s size.");
			this->chkResizeClamp->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkResizeClamp_CheckedChanged);
			// 
			// cboResizeMethod
			// 
			this->cboResizeMethod->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__14 = gcnew array<System::Object^>(3);
			__mcTemp__14[0] = "Nearest Power Of 2";
			__mcTemp__14[1] = "Biggest Power Of 2";
			__mcTemp__14[2] = "Smallest Power Of 2";
			this->cboResizeMethod->Items->AddRange(__mcTemp__14);
			this->cboResizeMethod->Location = System::Drawing::Point(104, 48);
			this->cboResizeMethod->Name = "cboResizeMethod";
			this->cboResizeMethod->Size = System::Drawing::Size(160, 21);
			this->cboResizeMethod->TabIndex = 2;
			this->tipMain->SetToolTip(this->cboResizeMethod, "The method for choosing which power of 2 to use.");
			// 
			// lblResizeMethod
			// 
			this->lblResizeMethod->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblResizeMethod->Location = System::Drawing::Point(8, 48);
			this->lblResizeMethod->Name = "lblResizeMethod";
			this->lblResizeMethod->Size = System::Drawing::Size(88, 16);
			this->lblResizeMethod->TabIndex = 1;
			this->lblResizeMethod->Text = "Resize Method:";
			// 
			// cboResizeSharpenFilter
			// 
			this->cboResizeSharpenFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__15 = gcnew array<System::Object^>(19);
			__mcTemp__15[0] = "None";
			__mcTemp__15[1] = "Negative";
			__mcTemp__15[2] = "Lighter";
			__mcTemp__15[3] = "Darker";
			__mcTemp__15[4] = "Contrast More";
			__mcTemp__15[5] = "Contrast Less";
			__mcTemp__15[6] = "Smoothen";
			__mcTemp__15[7] = "Sharpen Soft";
			__mcTemp__15[8] = "Sharpen Medium";
			__mcTemp__15[9] = "Sharpen Strong";
			__mcTemp__15[10] = "Find Edges";
			__mcTemp__15[11] = "Contour";
			__mcTemp__15[12] = "Edge Detect";
			__mcTemp__15[13] = "Edge Detect Soft";
			__mcTemp__15[14] = "Emboss";
			__mcTemp__15[15] = "Mean Removal";
			__mcTemp__15[16] = "Unsharpen Mask";
			__mcTemp__15[17] = "XSharpen";
			__mcTemp__15[18] = "Wrap Sharpen";
			this->cboResizeSharpenFilter->Items->AddRange(__mcTemp__15);
			this->cboResizeSharpenFilter->Location = System::Drawing::Point(104, 96);
			this->cboResizeSharpenFilter->Name = "cboResizeSharpenFilter";
			this->cboResizeSharpenFilter->Size = System::Drawing::Size(160, 21);
			this->cboResizeSharpenFilter->TabIndex = 6;
			this->tipMain->SetToolTip(this->cboResizeSharpenFilter, "The filter for sharpening image data.");
			// 
			// lblResizeSharpenFilter
			// 
			this->lblResizeSharpenFilter->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblResizeSharpenFilter->Location = System::Drawing::Point(8, 96);
			this->lblResizeSharpenFilter->Name = "lblResizeSharpenFilter";
			this->lblResizeSharpenFilter->Size = System::Drawing::Size(88, 16);
			this->lblResizeSharpenFilter->TabIndex = 5;
			this->lblResizeSharpenFilter->Text = "Sharpen Filter:";
			// 
			// cboResizeFilter
			// 
			this->cboResizeFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__16 = gcnew array<System::Object^>(14);
			__mcTemp__16[0] = "Point";
			__mcTemp__16[1] = "Box";
			__mcTemp__16[2] = "Triangle";
			__mcTemp__16[3] = "Quadratic";
			__mcTemp__16[4] = "Cubic";
			__mcTemp__16[5] = "Catrom";
			__mcTemp__16[6] = "Mitchell";
			__mcTemp__16[7] = "Gaussian";
			__mcTemp__16[8] = "Sine Cardinal";
			__mcTemp__16[9] = "Bessel";
			__mcTemp__16[10] = "Hanning";
			__mcTemp__16[11] = "Hamming";
			__mcTemp__16[12] = "Blackman";
			__mcTemp__16[13] = "Kaiser";
			this->cboResizeFilter->Items->AddRange(__mcTemp__16);
			this->cboResizeFilter->Location = System::Drawing::Point(104, 72);
			this->cboResizeFilter->Name = "cboResizeFilter";
			this->cboResizeFilter->Size = System::Drawing::Size(160, 21);
			this->cboResizeFilter->TabIndex = 4;
			this->tipMain->SetToolTip(this->cboResizeFilter, "The filter for resampling image data.");
			// 
			// lblResizeFilter
			// 
			this->lblResizeFilter->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblResizeFilter->Location = System::Drawing::Point(8, 72);
			this->lblResizeFilter->Name = "lblResizeFilter";
			this->lblResizeFilter->Size = System::Drawing::Size(88, 16);
			this->lblResizeFilter->TabIndex = 3;
			this->lblResizeFilter->Text = "Resize Filter:";
			// 
			// chkResize
			// 
			this->chkResize->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkResize->Location = System::Drawing::Point(8, 16);
			this->chkResize->Name = "chkResize";
			this->chkResize->Size = System::Drawing::Size(256, 24);
			this->chkResize->TabIndex = 0;
			this->chkResize->Text = "Resize";
			this->tipMain->SetToolTip(this->chkResize, "Resize the input image to be a power of 2 (if necessary).");
			this->chkResize->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkResize_CheckedChanged);
			// 
			// tipMain
			// 
			this->tipMain->AutoPopDelay = 10000;
			this->tipMain->InitialDelay = 500;
			this->tipMain->ReshowDelay = 100;
			// 
			// cboDXTQuality
			// 
			this->cboDXTQuality->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__17 = gcnew array<System::Object^>(3);
			__mcTemp__17[0] = "Low";
			__mcTemp__17[1] = "Medium";
			__mcTemp__17[2] = "High";
			this->cboDXTQuality->Items->AddRange(__mcTemp__17);
			this->cboDXTQuality->Location = System::Drawing::Point(104, 24);
			this->cboDXTQuality->Name = "cboDXTQuality";
			this->cboDXTQuality->Size = System::Drawing::Size(160, 21);
			this->cboDXTQuality->TabIndex = 1;
			this->tipMain->SetToolTip(this->cboDXTQuality, "DXT compression quality. Higher values mean longer compression times but better q"
				"uality. Does not effect the size of compressed image data.");
			// 
			// numUnsharpenMaskRadius
			// 
			this->numUnsharpenMaskRadius->DecimalPlaces = 2;
			array<System::Int32>^ __mcTemp__18 = gcnew array<System::Int32>(4);
			__mcTemp__18[0] = 5;
			__mcTemp__18[1] = 0;
			__mcTemp__18[2] = 0;
			__mcTemp__18[3] = 131072;
			this->numUnsharpenMaskRadius->Increment = System::Decimal(__mcTemp__18);
			this->numUnsharpenMaskRadius->Location = System::Drawing::Point(104, 24);
			array<System::Int32>^ __mcTemp__19 = gcnew array<System::Int32>(4);
			__mcTemp__19[0] = 10;
			__mcTemp__19[1] = 0;
			__mcTemp__19[2] = 0;
			__mcTemp__19[3] = 0;
			this->numUnsharpenMaskRadius->Maximum = System::Decimal(__mcTemp__19);
			array<System::Int32>^ __mcTemp__20 = gcnew array<System::Int32>(4);
			__mcTemp__20[0] = 5;
			__mcTemp__20[1] = 0;
			__mcTemp__20[2] = 0;
			__mcTemp__20[3] = 131072;
			this->numUnsharpenMaskRadius->Minimum = System::Decimal(__mcTemp__20);
			this->numUnsharpenMaskRadius->Name = "numUnsharpenMaskRadius";
			this->numUnsharpenMaskRadius->Size = System::Drawing::Size(160, 20);
			this->numUnsharpenMaskRadius->TabIndex = 1;
			this->tipMain->SetToolTip(this->numUnsharpenMaskRadius, "Unsharpen region in pixels.");
			array<System::Int32>^ __mcTemp__21 = gcnew array<System::Int32>(4);
			__mcTemp__21[0] = 5;
			__mcTemp__21[1] = 0;
			__mcTemp__21[2] = 0;
			__mcTemp__21[3] = 131072;
			this->numUnsharpenMaskRadius->Value = System::Decimal(__mcTemp__21);
			// 
			// numUnsharpenMaskAmount
			// 
			this->numUnsharpenMaskAmount->DecimalPlaces = 2;
			array<System::Int32>^ __mcTemp__22 = gcnew array<System::Int32>(4);
			__mcTemp__22[0] = 5;
			__mcTemp__22[1] = 0;
			__mcTemp__22[2] = 0;
			__mcTemp__22[3] = 131072;
			this->numUnsharpenMaskAmount->Increment = System::Decimal(__mcTemp__22);
			this->numUnsharpenMaskAmount->Location = System::Drawing::Point(104, 48);
			array<System::Int32>^ __mcTemp__23 = gcnew array<System::Int32>(4);
			__mcTemp__23[0] = 10;
			__mcTemp__23[1] = 0;
			__mcTemp__23[2] = 0;
			__mcTemp__23[3] = 0;
			this->numUnsharpenMaskAmount->Maximum = System::Decimal(__mcTemp__23);
			array<System::Int32>^ __mcTemp__24 = gcnew array<System::Int32>(4);
			__mcTemp__24[0] = 5;
			__mcTemp__24[1] = 0;
			__mcTemp__24[2] = 0;
			__mcTemp__24[3] = 131072;
			this->numUnsharpenMaskAmount->Minimum = System::Decimal(__mcTemp__24);
			this->numUnsharpenMaskAmount->Name = "numUnsharpenMaskAmount";
			this->numUnsharpenMaskAmount->Size = System::Drawing::Size(160, 20);
			this->numUnsharpenMaskAmount->TabIndex = 3;
			this->tipMain->SetToolTip(this->numUnsharpenMaskAmount, "The amount of sharpening to apply.");
			array<System::Int32>^ __mcTemp__25 = gcnew array<System::Int32>(4);
			__mcTemp__25[0] = 5;
			__mcTemp__25[1] = 0;
			__mcTemp__25[2] = 0;
			__mcTemp__25[3] = 131072;
			this->numUnsharpenMaskAmount->Value = System::Decimal(__mcTemp__25);
			// 
			// cboVersion
			// 
			this->cboVersion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			array<System::Object^>^ __mcTemp__26 = gcnew array<System::Object^>(6);
			__mcTemp__26[0] = "7.5";
			__mcTemp__26[1] = "7.4";
			__mcTemp__26[2] = "7.3";
			__mcTemp__26[3] = "7.2";
			__mcTemp__26[4] = "7.1";
			__mcTemp__26[5] = "7.0";
			this->cboVersion->Items->AddRange(__mcTemp__26);
			this->cboVersion->Location = System::Drawing::Point(104, 24);
			this->cboVersion->Name = "cboVersion";
			this->cboVersion->Size = System::Drawing::Size(160, 21);
			this->cboVersion->TabIndex = 1;
			this->tipMain->SetToolTip(this->cboVersion, "VTF Version number. Higher versions support more features but are less compatible"
				" with older games.");
			// 
			// chkCreateLODControlResource
			// 
			this->chkCreateLODControlResource->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkCreateLODControlResource->Location = System::Drawing::Point(8, 16);
			this->chkCreateLODControlResource->Name = "chkCreateLODControlResource";
			this->chkCreateLODControlResource->Size = System::Drawing::Size(256, 24);
			this->chkCreateLODControlResource->TabIndex = 0;
			this->chkCreateLODControlResource->Text = "Create LOD Control Resource";
			this->tipMain->SetToolTip(this->chkCreateLODControlResource, "Clamp texture LODs on the U and V axes.");
			this->chkCreateLODControlResource->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkCreateLODControlResource_CheckedChanged);
			// 
			// chkCreateInformationResource
			// 
			this->chkCreateInformationResource->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkCreateInformationResource->Location = System::Drawing::Point(8, 16);
			this->chkCreateInformationResource->Name = "chkCreateInformationResource";
			this->chkCreateInformationResource->Size = System::Drawing::Size(256, 24);
			this->chkCreateInformationResource->TabIndex = 0;
			this->chkCreateInformationResource->Text = "Create Information Resource";
			this->tipMain->SetToolTip(this->chkCreateInformationResource, "Embed texture metadata.\r\nNote: Creates an unofficial KVF resource.");
			this->chkCreateInformationResource->CheckedChanged += gcnew System::EventHandler(this, &CVTFOptions::chkCreateInformationResource_CheckedChanged);
			// 
			// numLuminanceWeightsR
			// 
			this->numLuminanceWeightsR->DecimalPlaces = 3;
			array<System::Int32>^ __mcTemp__27 = gcnew array<System::Int32>(4);
			__mcTemp__27[0] = 1;
			__mcTemp__27[1] = 0;
			__mcTemp__27[2] = 0;
			__mcTemp__27[3] = 196608;
			this->numLuminanceWeightsR->Increment = System::Decimal(__mcTemp__27);
			this->numLuminanceWeightsR->Location = System::Drawing::Point(104, 24);
			array<System::Int32>^ __mcTemp__28 = gcnew array<System::Int32>(4);
			__mcTemp__28[0] = 1;
			__mcTemp__28[1] = 0;
			__mcTemp__28[2] = 0;
			__mcTemp__28[3] = 0;
			this->numLuminanceWeightsR->Maximum = System::Decimal(__mcTemp__28);
			this->numLuminanceWeightsR->Name = "numLuminanceWeightsR";
			this->numLuminanceWeightsR->Size = System::Drawing::Size(160, 20);
			this->numLuminanceWeightsR->TabIndex = 1;
			// 
			// numLuminanceWeightsG
			// 
			this->numLuminanceWeightsG->DecimalPlaces = 3;
			array<System::Int32>^ __mcTemp__29 = gcnew array<System::Int32>(4);
			__mcTemp__29[0] = 1;
			__mcTemp__29[1] = 0;
			__mcTemp__29[2] = 0;
			__mcTemp__29[3] = 196608;
			this->numLuminanceWeightsG->Increment = System::Decimal(__mcTemp__29);
			this->numLuminanceWeightsG->Location = System::Drawing::Point(104, 48);
			array<System::Int32>^ __mcTemp__30 = gcnew array<System::Int32>(4);
			__mcTemp__30[0] = 1;
			__mcTemp__30[1] = 0;
			__mcTemp__30[2] = 0;
			__mcTemp__30[3] = 0;
			this->numLuminanceWeightsG->Maximum = System::Decimal(__mcTemp__30);
			this->numLuminanceWeightsG->Name = "numLuminanceWeightsG";
			this->numLuminanceWeightsG->Size = System::Drawing::Size(160, 20);
			this->numLuminanceWeightsG->TabIndex = 3;
			// 
			// numLuminanceWeightsB
			// 
			this->numLuminanceWeightsB->DecimalPlaces = 3;
			array<System::Int32>^ __mcTemp__31 = gcnew array<System::Int32>(4);
			__mcTemp__31[0] = 1;
			__mcTemp__31[1] = 0;
			__mcTemp__31[2] = 0;
			__mcTemp__31[3] = 196608;
			this->numLuminanceWeightsB->Increment = System::Decimal(__mcTemp__31);
			this->numLuminanceWeightsB->Location = System::Drawing::Point(104, 72);
			array<System::Int32>^ __mcTemp__32 = gcnew array<System::Int32>(4);
			__mcTemp__32[0] = 1;
			__mcTemp__32[1] = 0;
			__mcTemp__32[2] = 0;
			__mcTemp__32[3] = 0;
			this->numLuminanceWeightsB->Maximum = System::Decimal(__mcTemp__32);
			this->numLuminanceWeightsB->Name = "numLuminanceWeightsB";
			this->numLuminanceWeightsB->Size = System::Drawing::Size(160, 20);
			this->numLuminanceWeightsB->TabIndex = 5;
			// 
			// tabOptions
			// 
			this->tabOptions->Controls->Add(this->tabGeneral);
			this->tabOptions->Controls->Add(this->tabAdvanced);
			this->tabOptions->Controls->Add(this->tabResources);
			this->tabOptions->Location = System::Drawing::Point(8, 8);
			this->tabOptions->Name = "tabOptions";
			this->tabOptions->SelectedIndex = 0;
			this->tabOptions->Size = System::Drawing::Size(592, 384);
			this->tabOptions->TabIndex = 3;
			// 
			// tabGeneral
			// 
			this->tabGeneral->Controls->Add(this->grpGeneralOptions);
			this->tabGeneral->Location = System::Drawing::Point(4, 22);
			this->tabGeneral->Name = "tabGeneral";
			this->tabGeneral->Size = System::Drawing::Size(584, 358);
			this->tabGeneral->TabIndex = 0;
			this->tabGeneral->Text = "General";
			// 
			// tabAdvanced
			// 
			this->tabAdvanced->Controls->Add(this->grpAdvancedOptions);
			this->tabAdvanced->Location = System::Drawing::Point(4, 22);
			this->tabAdvanced->Name = "tabAdvanced";
			this->tabAdvanced->Size = System::Drawing::Size(584, 358);
			this->tabAdvanced->TabIndex = 1;
			this->tabAdvanced->Text = "Advanced";
			// 
			// grpAdvancedOptions
			// 
			this->grpAdvancedOptions->Controls->Add(this->grpVersion);
			this->grpAdvancedOptions->Controls->Add(this->grpLuminanceWeights);
			this->grpAdvancedOptions->Controls->Add(this->grpUnsharpenMaskOptions);
			this->grpAdvancedOptions->Controls->Add(this->grpDXTCompression);
			this->grpAdvancedOptions->Controls->Add(this->grpGammaCorrection);
			this->grpAdvancedOptions->Controls->Add(this->grpMiscellaneous);
			this->grpAdvancedOptions->Controls->Add(this->grpXSharpenOptions);
			this->grpAdvancedOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpAdvancedOptions->Location = System::Drawing::Point(8, 8);
			this->grpAdvancedOptions->Name = "grpAdvancedOptions";
			this->grpAdvancedOptions->Size = System::Drawing::Size(568, 344);
			this->grpAdvancedOptions->TabIndex = 0;
			this->grpAdvancedOptions->TabStop = false;
			this->grpAdvancedOptions->Text = "Advanced Options:";
			// 
			// grpVersion
			// 
			this->grpVersion->ContextMenu = this->mnuReset;
			this->grpVersion->Controls->Add(this->cboVersion);
			this->grpVersion->Controls->Add(this->lblVersion);
			this->grpVersion->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpVersion->Location = System::Drawing::Point(8, 16);
			this->grpVersion->Name = "grpVersion";
			this->grpVersion->Size = System::Drawing::Size(272, 56);
			this->grpVersion->TabIndex = 0;
			this->grpVersion->TabStop = false;
			this->grpVersion->Text = "Version:";
			// 
			// lblVersion
			// 
			this->lblVersion->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblVersion->Location = System::Drawing::Point(8, 24);
			this->lblVersion->Name = "lblVersion";
			this->lblVersion->Size = System::Drawing::Size(88, 16);
			this->lblVersion->TabIndex = 0;
			this->lblVersion->Text = "Version:";
			// 
			// grpLuminanceWeights
			// 
			this->grpLuminanceWeights->ContextMenu = this->mnuReset;
			this->grpLuminanceWeights->Controls->Add(this->numLuminanceWeightsB);
			this->grpLuminanceWeights->Controls->Add(this->numLuminanceWeightsG);
			this->grpLuminanceWeights->Controls->Add(this->lblLuminanceWeightsB);
			this->grpLuminanceWeights->Controls->Add(this->lblLuminanceWeightsG);
			this->grpLuminanceWeights->Controls->Add(this->numLuminanceWeightsR);
			this->grpLuminanceWeights->Controls->Add(this->lblLuminanceWeightsR);
			this->grpLuminanceWeights->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpLuminanceWeights->Location = System::Drawing::Point(288, 16);
			this->grpLuminanceWeights->Name = "grpLuminanceWeights";
			this->grpLuminanceWeights->Size = System::Drawing::Size(272, 104);
			this->grpLuminanceWeights->TabIndex = 4;
			this->grpLuminanceWeights->TabStop = false;
			this->grpLuminanceWeights->Text = "Luminance Weights:";
			// 
			// lblLuminanceWeightsB
			// 
			this->lblLuminanceWeightsB->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblLuminanceWeightsB->Location = System::Drawing::Point(8, 72);
			this->lblLuminanceWeightsB->Name = "lblLuminanceWeightsB";
			this->lblLuminanceWeightsB->Size = System::Drawing::Size(88, 16);
			this->lblLuminanceWeightsB->TabIndex = 4;
			this->lblLuminanceWeightsB->Text = "Blue:";
			// 
			// lblLuminanceWeightsG
			// 
			this->lblLuminanceWeightsG->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblLuminanceWeightsG->Location = System::Drawing::Point(8, 48);
			this->lblLuminanceWeightsG->Name = "lblLuminanceWeightsG";
			this->lblLuminanceWeightsG->Size = System::Drawing::Size(88, 16);
			this->lblLuminanceWeightsG->TabIndex = 2;
			this->lblLuminanceWeightsG->Text = "Green:";
			// 
			// lblLuminanceWeightsR
			// 
			this->lblLuminanceWeightsR->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblLuminanceWeightsR->Location = System::Drawing::Point(8, 24);
			this->lblLuminanceWeightsR->Name = "lblLuminanceWeightsR";
			this->lblLuminanceWeightsR->Size = System::Drawing::Size(88, 16);
			this->lblLuminanceWeightsR->TabIndex = 0;
			this->lblLuminanceWeightsR->Text = "Red:";
			// 
			// grpUnsharpenMaskOptions
			// 
			this->grpUnsharpenMaskOptions->ContextMenu = this->mnuReset;
			this->grpUnsharpenMaskOptions->Controls->Add(this->numUnsharpenMaskThreshold);
			this->grpUnsharpenMaskOptions->Controls->Add(this->lblUnsharpenMaskThreshold);
			this->grpUnsharpenMaskOptions->Controls->Add(this->numUnsharpenMaskAmount);
			this->grpUnsharpenMaskOptions->Controls->Add(this->lblUnsharpenMaskAmount);
			this->grpUnsharpenMaskOptions->Controls->Add(this->numUnsharpenMaskRadius);
			this->grpUnsharpenMaskOptions->Controls->Add(this->lblUnsharpenMaskRadius);
			this->grpUnsharpenMaskOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpUnsharpenMaskOptions->Location = System::Drawing::Point(288, 128);
			this->grpUnsharpenMaskOptions->Name = "grpUnsharpenMaskOptions";
			this->grpUnsharpenMaskOptions->Size = System::Drawing::Size(272, 104);
			this->grpUnsharpenMaskOptions->TabIndex = 5;
			this->grpUnsharpenMaskOptions->TabStop = false;
			this->grpUnsharpenMaskOptions->Text = "Unsharpen Mask Options:";
			// 
			// numUnsharpenMaskThreshold
			// 
			this->numUnsharpenMaskThreshold->DecimalPlaces = 2;
			array<System::Int32>^ __mcTemp__33 = gcnew array<System::Int32>(4);
			__mcTemp__33[0] = 5;
			__mcTemp__33[1] = 0;
			__mcTemp__33[2] = 0;
			__mcTemp__33[3] = 131072;
			this->numUnsharpenMaskThreshold->Increment = System::Decimal(__mcTemp__33);
			this->numUnsharpenMaskThreshold->Location = System::Drawing::Point(104, 72);
			array<System::Int32>^ __mcTemp__34 = gcnew array<System::Int32>(4);
			__mcTemp__34[0] = 10;
			__mcTemp__34[1] = 0;
			__mcTemp__34[2] = 0;
			__mcTemp__34[3] = 0;
			this->numUnsharpenMaskThreshold->Maximum = System::Decimal(__mcTemp__34);
			this->numUnsharpenMaskThreshold->Name = "numUnsharpenMaskThreshold";
			this->numUnsharpenMaskThreshold->Size = System::Drawing::Size(160, 20);
			this->numUnsharpenMaskThreshold->TabIndex = 5;
			// 
			// lblUnsharpenMaskThreshold
			// 
			this->lblUnsharpenMaskThreshold->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblUnsharpenMaskThreshold->Location = System::Drawing::Point(8, 72);
			this->lblUnsharpenMaskThreshold->Name = "lblUnsharpenMaskThreshold";
			this->lblUnsharpenMaskThreshold->Size = System::Drawing::Size(88, 16);
			this->lblUnsharpenMaskThreshold->TabIndex = 4;
			this->lblUnsharpenMaskThreshold->Text = "Threshold:";
			// 
			// lblUnsharpenMaskAmount
			// 
			this->lblUnsharpenMaskAmount->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblUnsharpenMaskAmount->Location = System::Drawing::Point(8, 48);
			this->lblUnsharpenMaskAmount->Name = "lblUnsharpenMaskAmount";
			this->lblUnsharpenMaskAmount->Size = System::Drawing::Size(88, 16);
			this->lblUnsharpenMaskAmount->TabIndex = 2;
			this->lblUnsharpenMaskAmount->Text = "Amount:";
			// 
			// lblUnsharpenMaskRadius
			// 
			this->lblUnsharpenMaskRadius->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblUnsharpenMaskRadius->Location = System::Drawing::Point(8, 24);
			this->lblUnsharpenMaskRadius->Name = "lblUnsharpenMaskRadius";
			this->lblUnsharpenMaskRadius->Size = System::Drawing::Size(88, 16);
			this->lblUnsharpenMaskRadius->TabIndex = 0;
			this->lblUnsharpenMaskRadius->Text = "Radius:";
			// 
			// grpDXTCompression
			// 
			this->grpDXTCompression->ContextMenu = this->mnuReset;
			this->grpDXTCompression->Controls->Add(this->cboDXTQuality);
			this->grpDXTCompression->Controls->Add(this->lblDXTQuality);
			this->grpDXTCompression->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpDXTCompression->Location = System::Drawing::Point(8, 272);
			this->grpDXTCompression->Name = "grpDXTCompression";
			this->grpDXTCompression->Size = System::Drawing::Size(272, 56);
			this->grpDXTCompression->TabIndex = 2;
			this->grpDXTCompression->TabStop = false;
			this->grpDXTCompression->Text = "DXT Compression:";
			// 
			// lblDXTQuality
			// 
			this->lblDXTQuality->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblDXTQuality->Location = System::Drawing::Point(8, 24);
			this->lblDXTQuality->Name = "lblDXTQuality";
			this->lblDXTQuality->Size = System::Drawing::Size(88, 16);
			this->lblDXTQuality->TabIndex = 0;
			this->lblDXTQuality->Text = "Quality:";
			// 
			// grpXSharpenOptions
			// 
			this->grpXSharpenOptions->ContextMenu = this->mnuReset;
			this->grpXSharpenOptions->Controls->Add(this->numXSharpenThreshold);
			this->grpXSharpenOptions->Controls->Add(this->lblXSharpenThreshold);
			this->grpXSharpenOptions->Controls->Add(this->numXSharpenStrength);
			this->grpXSharpenOptions->Controls->Add(this->lblXSharpenStrength);
			this->grpXSharpenOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpXSharpenOptions->Location = System::Drawing::Point(288, 240);
			this->grpXSharpenOptions->Name = "grpXSharpenOptions";
			this->grpXSharpenOptions->Size = System::Drawing::Size(272, 80);
			this->grpXSharpenOptions->TabIndex = 6;
			this->grpXSharpenOptions->TabStop = false;
			this->grpXSharpenOptions->Text = "X Sharpen Options:";
			// 
			// numXSharpenThreshold
			// 
			this->numXSharpenThreshold->Location = System::Drawing::Point(104, 48);
			array<System::Int32>^ __mcTemp__35 = gcnew array<System::Int32>(4);
			__mcTemp__35[0] = 255;
			__mcTemp__35[1] = 0;
			__mcTemp__35[2] = 0;
			__mcTemp__35[3] = 0;
			this->numXSharpenThreshold->Maximum = System::Decimal(__mcTemp__35);
			array<System::Int32>^ __mcTemp__36 = gcnew array<System::Int32>(4);
			__mcTemp__36[0] = 1;
			__mcTemp__36[1] = 0;
			__mcTemp__36[2] = 0;
			__mcTemp__36[3] = 0;
			this->numXSharpenThreshold->Minimum = System::Decimal(__mcTemp__36);
			this->numXSharpenThreshold->Name = "numXSharpenThreshold";
			this->numXSharpenThreshold->Size = System::Drawing::Size(160, 20);
			this->numXSharpenThreshold->TabIndex = 3;
			array<System::Int32>^ __mcTemp__37 = gcnew array<System::Int32>(4);
			__mcTemp__37[0] = 1;
			__mcTemp__37[1] = 0;
			__mcTemp__37[2] = 0;
			__mcTemp__37[3] = 0;
			this->numXSharpenThreshold->Value = System::Decimal(__mcTemp__37);
			// 
			// lblXSharpenThreshold
			// 
			this->lblXSharpenThreshold->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblXSharpenThreshold->Location = System::Drawing::Point(8, 48);
			this->lblXSharpenThreshold->Name = "lblXSharpenThreshold";
			this->lblXSharpenThreshold->Size = System::Drawing::Size(88, 16);
			this->lblXSharpenThreshold->TabIndex = 2;
			this->lblXSharpenThreshold->Text = "Threshold:";
			// 
			// numXSharpenStrength
			// 
			this->numXSharpenStrength->Location = System::Drawing::Point(104, 24);
			array<System::Int32>^ __mcTemp__38 = gcnew array<System::Int32>(4);
			__mcTemp__38[0] = 255;
			__mcTemp__38[1] = 0;
			__mcTemp__38[2] = 0;
			__mcTemp__38[3] = 0;
			this->numXSharpenStrength->Maximum = System::Decimal(__mcTemp__38);
			array<System::Int32>^ __mcTemp__39 = gcnew array<System::Int32>(4);
			__mcTemp__39[0] = 1;
			__mcTemp__39[1] = 0;
			__mcTemp__39[2] = 0;
			__mcTemp__39[3] = 0;
			this->numXSharpenStrength->Minimum = System::Decimal(__mcTemp__39);
			this->numXSharpenStrength->Name = "numXSharpenStrength";
			this->numXSharpenStrength->Size = System::Drawing::Size(160, 20);
			this->numXSharpenStrength->TabIndex = 1;
			array<System::Int32>^ __mcTemp__40 = gcnew array<System::Int32>(4);
			__mcTemp__40[0] = 1;
			__mcTemp__40[1] = 0;
			__mcTemp__40[2] = 0;
			__mcTemp__40[3] = 0;
			this->numXSharpenStrength->Value = System::Decimal(__mcTemp__40);
			// 
			// lblXSharpenStrength
			// 
			this->lblXSharpenStrength->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblXSharpenStrength->Location = System::Drawing::Point(8, 24);
			this->lblXSharpenStrength->Name = "lblXSharpenStrength";
			this->lblXSharpenStrength->Size = System::Drawing::Size(88, 16);
			this->lblXSharpenStrength->TabIndex = 0;
			this->lblXSharpenStrength->Text = "Strength:";
			// 
			// tabResources
			// 
			this->tabResources->Controls->Add(this->grpResourceOptions);
			this->tabResources->Location = System::Drawing::Point(4, 22);
			this->tabResources->Name = "tabResources";
			this->tabResources->Size = System::Drawing::Size(584, 358);
			this->tabResources->TabIndex = 2;
			this->tabResources->Text = "Resources";
			// 
			// grpResourceOptions
			// 
			this->grpResourceOptions->Controls->Add(this->grpInformationResource);
			this->grpResourceOptions->Controls->Add(this->grpLODControlResource);
			this->grpResourceOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpResourceOptions->Location = System::Drawing::Point(8, 8);
			this->grpResourceOptions->Name = "grpResourceOptions";
			this->grpResourceOptions->Size = System::Drawing::Size(568, 344);
			this->grpResourceOptions->TabIndex = 0;
			this->grpResourceOptions->TabStop = false;
			this->grpResourceOptions->Text = "Resource Options:";
			// 
			// grpInformationResource
			// 
			this->grpInformationResource->ContextMenu = this->mnuReset;
			this->grpInformationResource->Controls->Add(this->txtInformationComments);
			this->grpInformationResource->Controls->Add(this->txtInformationDescription);
			this->grpInformationResource->Controls->Add(this->lblInformationComments);
			this->grpInformationResource->Controls->Add(this->lblInformationDescription);
			this->grpInformationResource->Controls->Add(this->txtInformationModification);
			this->grpInformationResource->Controls->Add(this->txtInformationVersion);
			this->grpInformationResource->Controls->Add(this->lblInformationModification);
			this->grpInformationResource->Controls->Add(this->lblInformationVersion);
			this->grpInformationResource->Controls->Add(this->txtInformationContact);
			this->grpInformationResource->Controls->Add(this->txtInformationAuthor);
			this->grpInformationResource->Controls->Add(this->lblInformationContact);
			this->grpInformationResource->Controls->Add(this->lblInformationAuthor);
			this->grpInformationResource->Controls->Add(this->chkCreateInformationResource);
			this->grpInformationResource->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpInformationResource->Location = System::Drawing::Point(8, 126);
			this->grpInformationResource->Name = "grpInformationResource";
			this->grpInformationResource->Size = System::Drawing::Size(272, 200);
			this->grpInformationResource->TabIndex = 1;
			this->grpInformationResource->TabStop = false;
			this->grpInformationResource->Text = "Information Resource:";
			// 
			// txtInformationComments
			// 
			this->txtInformationComments->Location = System::Drawing::Point(104, 168);
			this->txtInformationComments->MaxLength = 8192;
			this->txtInformationComments->Name = "txtInformationComments";
			this->txtInformationComments->Size = System::Drawing::Size(160, 20);
			this->txtInformationComments->TabIndex = 12;
			// 
			// txtInformationDescription
			// 
			this->txtInformationDescription->Location = System::Drawing::Point(104, 144);
			this->txtInformationDescription->MaxLength = 8192;
			this->txtInformationDescription->Name = "txtInformationDescription";
			this->txtInformationDescription->Size = System::Drawing::Size(160, 20);
			this->txtInformationDescription->TabIndex = 10;
			// 
			// lblInformationComments
			// 
			this->lblInformationComments->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblInformationComments->Location = System::Drawing::Point(8, 168);
			this->lblInformationComments->Name = "lblInformationComments";
			this->lblInformationComments->Size = System::Drawing::Size(88, 16);
			this->lblInformationComments->TabIndex = 11;
			this->lblInformationComments->Text = "Comments:";
			// 
			// lblInformationDescription
			// 
			this->lblInformationDescription->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblInformationDescription->Location = System::Drawing::Point(8, 144);
			this->lblInformationDescription->Name = "lblInformationDescription";
			this->lblInformationDescription->Size = System::Drawing::Size(88, 16);
			this->lblInformationDescription->TabIndex = 9;
			this->lblInformationDescription->Text = "Description:";
			// 
			// txtInformationModification
			// 
			this->txtInformationModification->Location = System::Drawing::Point(104, 120);
			this->txtInformationModification->MaxLength = 8192;
			this->txtInformationModification->Name = "txtInformationModification";
			this->txtInformationModification->Size = System::Drawing::Size(160, 20);
			this->txtInformationModification->TabIndex = 8;
			// 
			// txtInformationVersion
			// 
			this->txtInformationVersion->Location = System::Drawing::Point(104, 96);
			this->txtInformationVersion->MaxLength = 8192;
			this->txtInformationVersion->Name = "txtInformationVersion";
			this->txtInformationVersion->Size = System::Drawing::Size(160, 20);
			this->txtInformationVersion->TabIndex = 6;
			// 
			// lblInformationModification
			// 
			this->lblInformationModification->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblInformationModification->Location = System::Drawing::Point(8, 120);
			this->lblInformationModification->Name = "lblInformationModification";
			this->lblInformationModification->Size = System::Drawing::Size(88, 16);
			this->lblInformationModification->TabIndex = 7;
			this->lblInformationModification->Text = "Modification:";
			// 
			// lblInformationVersion
			// 
			this->lblInformationVersion->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblInformationVersion->Location = System::Drawing::Point(8, 96);
			this->lblInformationVersion->Name = "lblInformationVersion";
			this->lblInformationVersion->Size = System::Drawing::Size(88, 16);
			this->lblInformationVersion->TabIndex = 5;
			this->lblInformationVersion->Text = "Version:";
			// 
			// txtInformationContact
			// 
			this->txtInformationContact->Location = System::Drawing::Point(104, 72);
			this->txtInformationContact->MaxLength = 8192;
			this->txtInformationContact->Name = "txtInformationContact";
			this->txtInformationContact->Size = System::Drawing::Size(160, 20);
			this->txtInformationContact->TabIndex = 4;
			// 
			// txtInformationAuthor
			// 
			this->txtInformationAuthor->Location = System::Drawing::Point(104, 48);
			this->txtInformationAuthor->MaxLength = 8192;
			this->txtInformationAuthor->Name = "txtInformationAuthor";
			this->txtInformationAuthor->Size = System::Drawing::Size(160, 20);
			this->txtInformationAuthor->TabIndex = 2;
			// 
			// lblInformationContact
			// 
			this->lblInformationContact->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblInformationContact->Location = System::Drawing::Point(8, 72);
			this->lblInformationContact->Name = "lblInformationContact";
			this->lblInformationContact->Size = System::Drawing::Size(88, 16);
			this->lblInformationContact->TabIndex = 3;
			this->lblInformationContact->Text = "Contact:";
			// 
			// lblInformationAuthor
			// 
			this->lblInformationAuthor->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblInformationAuthor->Location = System::Drawing::Point(8, 48);
			this->lblInformationAuthor->Name = "lblInformationAuthor";
			this->lblInformationAuthor->Size = System::Drawing::Size(88, 16);
			this->lblInformationAuthor->TabIndex = 1;
			this->lblInformationAuthor->Text = "Author:";
			// 
			// grpLODControlResource
			// 
			this->grpLODControlResource->ContextMenu = this->mnuReset;
			this->grpLODControlResource->Controls->Add(this->numLODControlClampV);
			this->grpLODControlResource->Controls->Add(this->lblLODControlClampV);
			this->grpLODControlResource->Controls->Add(this->numLODControlClampU);
			this->grpLODControlResource->Controls->Add(this->lblLODControlClampU);
			this->grpLODControlResource->Controls->Add(this->chkCreateLODControlResource);
			this->grpLODControlResource->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpLODControlResource->Location = System::Drawing::Point(8, 16);
			this->grpLODControlResource->Name = "grpLODControlResource";
			this->grpLODControlResource->Size = System::Drawing::Size(272, 104);
			this->grpLODControlResource->TabIndex = 0;
			this->grpLODControlResource->TabStop = false;
			this->grpLODControlResource->Text = "LOD Control Resource:";
			// 
			// numLODControlClampV
			// 
			this->numLODControlClampV->Location = System::Drawing::Point(104, 72);
			array<System::Int32>^ __mcTemp__41 = gcnew array<System::Int32>(4);
			__mcTemp__41[0] = 31;
			__mcTemp__41[1] = 0;
			__mcTemp__41[2] = 0;
			__mcTemp__41[3] = 0;
			this->numLODControlClampV->Maximum = System::Decimal(__mcTemp__41);
			this->numLODControlClampV->Name = "numLODControlClampV";
			this->numLODControlClampV->Size = System::Drawing::Size(160, 20);
			this->numLODControlClampV->TabIndex = 4;
			// 
			// lblLODControlClampV
			// 
			this->lblLODControlClampV->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblLODControlClampV->Location = System::Drawing::Point(8, 72);
			this->lblLODControlClampV->Name = "lblLODControlClampV";
			this->lblLODControlClampV->Size = System::Drawing::Size(88, 16);
			this->lblLODControlClampV->TabIndex = 3;
			this->lblLODControlClampV->Text = "Clamp V:";
			// 
			// numLODControlClampU
			// 
			this->numLODControlClampU->Location = System::Drawing::Point(104, 48);
			array<System::Int32>^ __mcTemp__42 = gcnew array<System::Int32>(4);
			__mcTemp__42[0] = 31;
			__mcTemp__42[1] = 0;
			__mcTemp__42[2] = 0;
			__mcTemp__42[3] = 0;
			this->numLODControlClampU->Maximum = System::Decimal(__mcTemp__42);
			this->numLODControlClampU->Name = "numLODControlClampU";
			this->numLODControlClampU->Size = System::Drawing::Size(160, 20);
			this->numLODControlClampU->TabIndex = 2;
			// 
			// lblLODControlClampU
			// 
			this->lblLODControlClampU->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblLODControlClampU->Location = System::Drawing::Point(8, 48);
			this->lblLODControlClampU->Name = "lblLODControlClampU";
			this->lblLODControlClampU->Size = System::Drawing::Size(88, 16);
			this->lblLODControlClampU->TabIndex = 1;
			this->lblLODControlClampU->Text = "Clamp U:";
			// 
			// CVTFOptions
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(610, 432);
			this->Controls->Add(this->tabOptions);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (safe_cast<System::Drawing::Icon^>(resources->GetObject("$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = "CVTFOptions";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = "VTF Options";
			this->Load += gcnew System::EventHandler(this, &CVTFOptions::CVTFOptions_Load);
			this->grpMiscellaneous->ResumeLayout(false);
			this->grpGeneral->ResumeLayout(false);
			this->grpMipmaps->ResumeLayout(false);
			this->grpNormalMap->ResumeLayout(false);
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNormalScale))->EndInit();
			this->grpGammaCorrection->ResumeLayout(false);
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numGammaCorrection))->EndInit();
			this->grpGeneralOptions->ResumeLayout(false);
			this->grpResize->ResumeLayout(false);
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUnsharpenMaskRadius))->EndInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUnsharpenMaskAmount))->EndInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLuminanceWeightsR))->EndInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLuminanceWeightsG))->EndInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLuminanceWeightsB))->EndInit();
			this->tabOptions->ResumeLayout(false);
			this->tabGeneral->ResumeLayout(false);
			this->tabAdvanced->ResumeLayout(false);
			this->grpAdvancedOptions->ResumeLayout(false);
			this->grpVersion->ResumeLayout(false);
			this->grpLuminanceWeights->ResumeLayout(false);
			this->grpUnsharpenMaskOptions->ResumeLayout(false);
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numUnsharpenMaskThreshold))->EndInit();
			this->grpDXTCompression->ResumeLayout(false);
			this->grpXSharpenOptions->ResumeLayout(false);
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numXSharpenThreshold))->EndInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numXSharpenStrength))->EndInit();
			this->tabResources->ResumeLayout(false);
			this->grpResourceOptions->ResumeLayout(false);
			this->grpInformationResource->ResumeLayout(false);
			this->grpInformationResource->PerformLayout();
			this->grpLODControlResource->ResumeLayout(false);
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLODControlClampV))->EndInit();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLODControlClampU))->EndInit();
			this->ResumeLayout(false);

		}
	public: property VTFImageFormat NormalFormat
	{
		VTFImageFormat get()
		{
			return (VTFImageFormat)this->cboFormat->SelectedIndex;
		}
		void set(VTFImageFormat ImageFormat)
		{
			int iIndex = Convert::ToInt32(ImageFormat);
			if (iIndex >= 0 && iIndex < this->cboFormat->Items->Count)
			{
				this->cboFormat->SelectedIndex = iIndex;
			}
		}
	}

	public: property VTFImageFormat AlphaFormat
	{
		VTFImageFormat get()
		{
			return (VTFImageFormat)this->cboAlphaFormat->SelectedIndex;
		}
		void set(VTFImageFormat ImageFormat)
		{
			int iIndex = Convert::ToInt32(ImageFormat);
			if (iIndex >= 0 && iIndex < this->cboAlphaFormat->Items->Count)
			{
				this->cboAlphaFormat->SelectedIndex = iIndex;
			}
		}
	}

	public: property int TextureType
	{
		int get()
		{
			return this->cboTextureType->SelectedIndex;
		}
		void set(int iTextureType)
		{
			if (iTextureType >= 0 && iTextureType < this->cboTextureType->Items->Count)
			{
				this->cboTextureType->SelectedIndex = iTextureType;
			}
		}
	}

		  //
		  // Resize.
		  //

	public:property vlBool ResizeImage
	{
		vlBool get()
		{
			return this->chkResize->Checked == true;
		}
		void set(vlBool bResize)
		{
			this->chkResize->Checked = bResize > 0;
		}
	}

	public: property VTFResizeMethod ResizeMethod
	{
		VTFResizeMethod get()
		{
			return (VTFResizeMethod)this->cboResizeMethod->SelectedIndex;
		}
		void set(VTFResizeMethod ResizeMethod)
		{
			int iIndex = Convert::ToInt32(ResizeMethod);
			if (iIndex >= 0 && iIndex < this->cboResizeMethod->Items->Count)
			{
				this->cboResizeMethod->SelectedIndex = iIndex;
			}
		}
	}

	public: property VTFMipmapFilter ResizeFilter
	{
		VTFMipmapFilter get()
		{
			return (VTFMipmapFilter)this->cboResizeFilter->SelectedIndex;
		}
		void set(VTFMipmapFilter ResizeFilter)
		{
			int iIndex = Convert::ToInt32(ResizeFilter);
			if (iIndex >= 0 && iIndex < this->cboResizeFilter->Items->Count)
			{
				this->cboResizeFilter->SelectedIndex = iIndex;
			}
		}
	}

	public: property VTFSharpenFilter ResizeSharpenFilter
	{
		VTFSharpenFilter get()
		{
			return (VTFSharpenFilter)this->cboResizeSharpenFilter->SelectedIndex;
		}
		void set(VTFSharpenFilter SharpenFilter)
		{
			int iIndex = Convert::ToInt32(SharpenFilter);
			if (iIndex >= 0 && iIndex < this->cboResizeSharpenFilter->Items->Count)
			{
				this->cboResizeSharpenFilter->SelectedIndex = iIndex;
			}
		}
	}

	public: property vlBool ResizeClamp
	{
		vlBool get()
		{
			return this->chkResizeClamp->Checked == true;
		}
		void set(vlBool bResize)
		{
			this->chkResizeClamp->Checked = bResize > 0;
		}
	}

	public: property vlUInt ResizeClampWidth
	{
		vlUInt get()
		{
			return Convert::ToUInt32(this->cboMaximumWidth->Text);
		}
		void set(vlUInt uiResizeClampWidth)
		{
			this->cboMaximumWidth->Text = uiResizeClampWidth.ToString();
			if (this->cboMaximumWidth->SelectedIndex == -1)
			{
				this->cboMaximumWidth->SelectedIndex = 12;
			}
		}
	}

	public: property vlUInt ResizeClampHeight
	{
		vlUInt get()
		{
			return Convert::ToUInt32(this->cboMaximumHeight->Text);
		}
		void set(vlUInt uiResizeClampHeight)
		{
			this->cboMaximumHeight->Text = uiResizeClampHeight.ToString();
			if (this->cboMaximumHeight->SelectedIndex == -1)
			{
				this->cboMaximumHeight->SelectedIndex = 12;
			}
		}
	}

		  //
		  // Mipmaps.
		  //

	public: property vlBool GenerateMipmaps
	{
		vlBool get()
		{
			return this->chkMipmaps->Checked == true;
		}
		void set(vlBool bGenerateMipmaps)
		{
			this->chkMipmaps->Checked = bGenerateMipmaps > 0;
		}
	}

	public: property VTFMipmapFilter MipmapFilter
	{
		VTFMipmapFilter get()
		{
			return (VTFMipmapFilter)this->cboMipmapFilter->SelectedIndex;
		}
		void set(VTFMipmapFilter MipmapFilter)
		{
			int iIndex = Convert::ToInt32(MipmapFilter);
			if (iIndex >= 0 && iIndex < this->cboMipmapFilter->Items->Count)
			{
				this->cboMipmapFilter->SelectedIndex = iIndex;
			}
		}
	}

	public: property VTFSharpenFilter MipmapSharpenFilter
	{
		VTFSharpenFilter get()
		{
			return (VTFSharpenFilter)this->cboMipmapSharpenFilter->SelectedIndex;
		}
		void set(VTFSharpenFilter SharpenFilter)
		{
			int iIndex = Convert::ToInt32(SharpenFilter);
			if (iIndex >= 0 && iIndex < this->cboMipmapSharpenFilter->Items->Count)
			{
				this->cboMipmapSharpenFilter->SelectedIndex = iIndex;
			}
		}
	}

		  //
		  // Normal maps.
		  //

	public: property vlBool ConvertToNormalMap
	{
		vlBool get()
		{
			return this->chkNormalMap->Enabled && this->chkNormalMap->Checked == true;
		}
		void set(vlBool bConvertToNormalMap)
		{
			this->chkNormalMap->Checked = bConvertToNormalMap > 0;
		}
	}

	public: property VTFKernelFilter KernelFilter
	{
		VTFKernelFilter get()
		{
			return (VTFKernelFilter)this->cboKernelFilter->SelectedIndex;
		}
		void set(VTFKernelFilter KernelFilter)
		{
			int iIndex = Convert::ToInt32(KernelFilter);
			if (iIndex >= 0 && iIndex < this->cboKernelFilter->Items->Count)
			{
				this->cboKernelFilter->SelectedIndex = iIndex;
			}
		}
	}

	public: property VTFHeightConversionMethod HeightConversionMethod
	{
		VTFHeightConversionMethod get()
		{
			return (VTFHeightConversionMethod)this->cboHeightSource->SelectedIndex;
		}
		void set(VTFHeightConversionMethod HeightConversionMethod)
		{
			int iIndex = Convert::ToInt32(HeightConversionMethod);
			if (iIndex >= 0 && iIndex < this->cboHeightSource->Items->Count)
			{
				this->cboHeightSource->SelectedIndex = iIndex;
			}
		}
	}

	public: property VTFNormalAlphaResult AlphaResult
	{
		VTFNormalAlphaResult get()
		{
			return (VTFNormalAlphaResult)this->cboAlphaResult->SelectedIndex;
		}
		void set(VTFNormalAlphaResult AlphaResult)
		{
			int iIndex = Convert::ToInt32(AlphaResult);
			if (iIndex >= 0 && iIndex < this->cboAlphaResult->Items->Count)
			{
				this->cboAlphaResult->SelectedIndex = iIndex;
			}
		}
	}

	public: property vlSingle NormalScale
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numNormalScale->Value);
		}
		void set(vlSingle sNormalScale)
		{
			this->SetNumericUpDownValue(this->numNormalScale, Convert::ToDecimal(sNormalScale));
		}
	}

	public: property vlBool NormalWrap
	{
		vlBool get()
		{
			return this->chkNormalWrap->Checked == true;
		}
		void set(vlBool bResize)
		{
			this->chkNormalWrap->Checked = bResize > 0;
		}
	}

		  // Version.

	public: property String^ Version
	{
		String^  get()
		{
			return this->cboVersion->Text;
		}
		void set(String^ sVersion)
		{
			this->cboVersion->Text = sVersion;
			if (this->cboVersion->SelectedIndex == -1)
			{
				this->cboVersion->SelectedIndex = 3;
			}
		}
	}

		  //
		  // Misc.
		  //

	public: property vlBool ComputeReflectivity
	{
		vlBool get()
		{
			return this->chkReflectivity->Checked == true;
		}
		void set(vlBool bComputeReflectivity)
		{
			this->chkReflectivity->Checked = bComputeReflectivity > 0;
		}
	}

	public: property vlBool GenerateThumbnail
	{
		vlBool get()
		{
			return this->chkThumbnail->Checked == true;
		}
		void set(vlBool bGenerateThumbnail)
		{
			this->chkThumbnail->Checked = bGenerateThumbnail > 0;
		}
	}

	public: property vlBool GenerateSphereMap
	{
		vlBool get()
		{
			return this->chkSphereMap->Enabled && this->chkSphereMap->Checked == true;
		}
		void set(vlBool bGenerateSphereMap)
		{
			this->chkSphereMap->Checked = bGenerateSphereMap > 0;
		}
	}

		  //
		  // DXT Compression.
		  //

	public: property VTFDXTQuality DXTQuality
	{
		VTFDXTQuality get()
		{
			return (VTFDXTQuality)this->cboDXTQuality->SelectedIndex;
		}
		void set(VTFDXTQuality DXTQuality)
		{
			int iIndex = Convert::ToInt32(DXTQuality);
			if (iIndex >= 0 && iIndex < this->cboAlphaResult->Items->Count)
			{
				this->cboDXTQuality->SelectedIndex = iIndex;
			}
		}
	}

		  //
		  // Gamma correction.
		  //

	public: property vlBool CorrectGamma
	{
		vlBool get()
		{
			return this->chkGammaCorrection->Checked == true;
		}
		void set(vlBool bGammaCorrection)
		{
			this->chkGammaCorrection->Checked = bGammaCorrection > 0;
		}
	}

	public: property vlSingle GammaCorrection
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numGammaCorrection->Value);
		}
		void set(vlSingle sGammaCorrection)
		{
			this->SetNumericUpDownValue(this->numGammaCorrection, Convert::ToDecimal(sGammaCorrection));
		}
	}

		  //
		  // Luminance Weights.
		  //

	public: property vlSingle LuminanceWeightR
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numLuminanceWeightsR->Value);
		}
		void set(vlSingle sLuminanceWeightR)
		{
			this->SetNumericUpDownValue(this->numLuminanceWeightsR, Convert::ToDecimal(sLuminanceWeightR));
		}
	}

	public: property vlSingle LuminanceWeightG
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numLuminanceWeightsG->Value);
		}
		void set(vlSingle sLuminanceWeightG)
		{
			this->SetNumericUpDownValue(this->numLuminanceWeightsG, Convert::ToDecimal(sLuminanceWeightG));
		}
	}

	public: property vlSingle LuminanceWeightB
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numLuminanceWeightsB->Value);
		}
		void set(vlSingle sLuminanceWeightB)
		{
			this->SetNumericUpDownValue(this->numLuminanceWeightsB, Convert::ToDecimal(sLuminanceWeightB));
		}
	}

		  //
		  // Unshapren Mask.
		  //

	public: property vlSingle UnsharpenMaskRadius
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numUnsharpenMaskRadius->Value);
		}
		void set(vlSingle sUnsharpenMaskRadius)
		{
			this->SetNumericUpDownValue(this->numUnsharpenMaskRadius, Convert::ToDecimal(sUnsharpenMaskRadius));
		}
	}

	public: property vlSingle UnsharpenMaskAmount
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numUnsharpenMaskAmount->Value);
		}
		void set(vlSingle sUnsharpenMaskAmount)
		{
			this->SetNumericUpDownValue(this->numUnsharpenMaskAmount, Convert::ToDecimal(sUnsharpenMaskAmount));
		}
	}

	public: property vlSingle UnsharpenMaskThreshold
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numUnsharpenMaskThreshold->Value);
		}
		void set(vlSingle sUnsharpenMaskThreshold)
		{
			this->SetNumericUpDownValue(this->numUnsharpenMaskThreshold, Convert::ToDecimal(sUnsharpenMaskThreshold));
		}
	}

		  //
		  // X Sharpen.
		  //

	public: property vlSingle XSharpenStrength
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numXSharpenStrength->Value);
		}
		void set(vlSingle sXSharpenStrength)
		{
			this->SetNumericUpDownValue(this->numXSharpenStrength, Convert::ToDecimal(sXSharpenStrength));
		}
	}

	public: property vlSingle XSharpenThreshold
	{
		vlSingle get()
		{
			return Convert::ToSingle(this->numXSharpenThreshold->Value);
		}
		void set(vlSingle sXSharpenThreshold)
		{
			this->SetNumericUpDownValue(this->numXSharpenThreshold, Convert::ToDecimal(sXSharpenThreshold));
		}
	}

		  // LOD Control Resource

	public: property vlBool CreateLODControlResource
	{
		vlBool get()
		{
			return this->chkCreateLODControlResource->Checked == true;
		}
		void set(vlBool bCreateLODControlResource)
		{
			this->chkCreateLODControlResource->Checked = bCreateLODControlResource > 0;
		}
	}

	public: property vlUInt LODControlClampU
	{
		vlUInt get()
		{
			return Convert::ToUInt32(this->numLODControlClampU->Value);
		}
		void set(vlUInt uiLODControlClampU)
		{
			this->SetNumericUpDownValue(this->numLODControlClampU, Convert::ToDecimal(uiLODControlClampU));
		}
	}

	public: property vlUInt LODControlClampV
	{
		vlUInt get()
		{
			return Convert::ToUInt32(this->numLODControlClampV->Value);
		}
		void set(vlUInt uiLODControlClampV)
		{
			this->SetNumericUpDownValue(this->numLODControlClampV, Convert::ToDecimal(uiLODControlClampV));
		}
	}

	private: System::Void SetNumericUpDownValue(NumericUpDown^ Control, System::Decimal dValue)
	{
		if (dValue < Control->Minimum)
		{
			Control->Value = Control->Minimum;
		}
		else if (dValue > Control->Maximum)
		{
			Control->Value = Control->Maximum;
		}
		else
		{
			Control->Value = dValue;
		}
	}

		   // LOD Control Resource

	public: property vlBool CreateInformationResource
	{
		vlBool get()
		{
			return this->chkCreateInformationResource->Checked == true;
		}
		void set(vlBool bCreateInformationResource)
		{
			this->chkCreateInformationResource->Checked = bCreateInformationResource > 0;
		}
	}

	public: property String^ InformationAuthor
	{
		String^  get()
		{
			return this->txtInformationAuthor->Text;
		}
		void set(String^ sInformationAuthor)
		{
			this->txtInformationAuthor->Text = sInformationAuthor;
		}
	}

	public: property String^ InformationContact
	{
		String^  get()
		{
			return this->txtInformationContact->Text;
		}
		void set(String^ sInformationContact)
		{
			this->txtInformationContact->Text = sInformationContact;
		}
	}

	public: property String^ InformationVersion
	{
		String^ get()
		{
			return this->txtInformationVersion->Text;
		}
		void set(String^ sInformationVersion)
		{
			this->txtInformationVersion->Text = sInformationVersion;
		}
	}

	public: property String^ InformationModification
	{
		String^ get()
		{
			return this->txtInformationModification->Text;
		}
		void set(String^ sInformationModification)
		{
			this->txtInformationModification->Text = sInformationModification;
		}
	}

	public: property String^ InformationDescription
	{
		String^ get()
		{
			return this->txtInformationDescription->Text;
		}
		void set(String^ sInformationDescription)
		{
			this->txtInformationDescription->Text = sInformationDescription;
		}
	}

	public: property String^ InformationComments
	{
		String^ get()
		{
			return this->txtInformationComments->Text;
		}
		void set(String^ sInformationComments)
		{
			this->txtInformationComments->Text = sInformationComments;
		}
	}

	private: System::Void CVTFOptions_Load(System::Object^ sender, System::EventArgs^ e)
	{
		/*this->cboFormat->SelectedIndex = 0;
		this->cboMipmapFilter->SelectedIndex = 1;
		this->cboSharpenFilter->SelectedIndex = 7;
		this->cboTextureType->SelectedIndex = 0;
		this->cboKernelFilter->SelectedIndex = 1;
		this->cboHeightSource->SelectedIndex = 1;*/
	}

	private: System::Void cboTextureType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->chkNormalMap->Enabled = this->cboTextureType->SelectedIndex == 0;
		this->cboKernelFilter->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->cboHeightSource->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->cboAlphaResult->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->numNormalScale->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->chkNormalWrap->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->chkSphereMap->Enabled = this->cboTextureType->SelectedIndex == 1;
	}

	private: System::Void chkResize_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->cboResizeMethod->Enabled = this->chkResize->Checked;
		this->cboResizeFilter->Enabled = this->chkResize->Checked;
		this->cboResizeSharpenFilter->Enabled = this->chkResize->Checked;

		this->chkResizeClamp->Enabled = this->chkResize->Checked;
		this->cboMaximumWidth->Enabled = this->chkResize->Checked && this->chkResizeClamp->Checked;
		this->cboMaximumHeight->Enabled = this->chkResize->Checked && this->chkResizeClamp->Checked;
	}

	private: System::Void chkResizeClamp_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->cboMaximumWidth->Enabled = this->chkResize->Checked && this->chkResizeClamp->Checked;
		this->cboMaximumHeight->Enabled = this->chkResize->Checked && this->chkResizeClamp->Checked;
	}

	private: System::Void chkMipmaps_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->cboMipmapFilter->Enabled = this->chkMipmaps->Checked;
		this->cboMipmapSharpenFilter->Enabled = this->chkMipmaps->Checked;
	}

	private: System::Void chkNormalMap_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->cboKernelFilter->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->cboHeightSource->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->cboAlphaResult->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->numNormalScale->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
		this->chkNormalWrap->Enabled = this->cboTextureType->SelectedIndex == 0 && this->chkNormalMap->Checked;
	}

	private: System::Void chkGammaCorrection_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->numGammaCorrection->Enabled = this->chkGammaCorrection->Checked;
	}

	private: System::Void chkCreateLODControlResource_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->numLODControlClampU->Enabled = this->chkCreateLODControlResource->Checked;
		this->numLODControlClampV->Enabled = this->chkCreateLODControlResource->Checked;
	}

	private: System::Void chkCreateInformationResource_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->txtInformationAuthor->Enabled = this->chkCreateInformationResource->Checked;
		this->txtInformationContact->Enabled = this->chkCreateInformationResource->Checked;
		this->txtInformationVersion->Enabled = this->chkCreateInformationResource->Checked;
		this->txtInformationModification->Enabled = this->chkCreateInformationResource->Checked;
		this->txtInformationDescription->Enabled = this->chkCreateInformationResource->Checked;
		this->txtInformationComments->Enabled = this->chkCreateInformationResource->Checked;
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->cboFormat->SelectedIndex = 13;
		this->cboAlphaFormat->SelectedIndex = 15;
		this->cboTextureType->SelectedIndex = 0;

		this->chkResize->Checked = true;
		this->cboResizeMethod->SelectedIndex = 0;
		this->cboResizeFilter->SelectedIndex = 2;
		this->cboResizeSharpenFilter->SelectedIndex = 0;

		this->chkResizeClamp->Checked = true;
		this->cboMaximumWidth->SelectedIndex = 12;
		this->cboMaximumHeight->SelectedIndex = 12;

		this->chkMipmaps->Checked = true;
		this->cboMipmapFilter->SelectedIndex = 1;
		this->cboMipmapSharpenFilter->SelectedIndex = 7;

		this->chkNormalMap->Checked = false;
		this->cboKernelFilter->SelectedIndex = 1;
		this->cboHeightSource->SelectedIndex = 1;
		this->cboAlphaResult->SelectedIndex = 3;
		this->numNormalScale->Value = System::Decimal(2.0f);
		this->chkNormalMap->Checked = false;

		this->cboVersion->SelectedIndex = 3;

		this->chkReflectivity->Checked = true;
		this->chkThumbnail->Checked = true;
		this->chkSphereMap->Checked = true;

		this->cboDXTQuality->SelectedIndex = 2;

		this->chkGammaCorrection->Checked = false;
		this->numGammaCorrection->Value = System::Decimal(2.2f);

		this->numLuminanceWeightsR->Value = System::Decimal(0.299f);
		this->numLuminanceWeightsG->Value = System::Decimal(0.587f);
		this->numLuminanceWeightsB->Value = System::Decimal(0.114f);

		this->numUnsharpenMaskRadius->Value = System::Decimal(2.0f);
		this->numUnsharpenMaskAmount->Value = System::Decimal(0.5f);
		this->numUnsharpenMaskThreshold->Value = System::Decimal(0.0f);

		this->numXSharpenStrength->Value = System::Decimal(255.0f);
		this->numXSharpenThreshold->Value = System::Decimal(255.0f);

		this->chkCreateLODControlResource->Checked = false;
		this->numLODControlClampU->Value = this->numLODControlClampU->Maximum;
		this->numLODControlClampV->Value = this->numLODControlClampV->Maximum;

		this->chkCreateInformationResource->Checked = false;
		this->txtInformationAuthor->Clear();
		this->txtInformationContact->Clear();
		this->txtInformationVersion->Clear();
		this->txtInformationModification->Clear();
		this->txtInformationDescription->Clear();
		this->txtInformationComments->Clear();

		this->cboTextureType_SelectedIndexChanged(this, System::EventArgs::Empty);
		this->chkResize_CheckedChanged(this, System::EventArgs::Empty);
		this->chkResizeClamp_CheckedChanged(this, System::EventArgs::Empty);
		this->chkGammaCorrection_CheckedChanged(this, System::EventArgs::Empty);
		this->chkMipmaps_CheckedChanged(this, System::EventArgs::Empty);
		this->chkNormalMap_CheckedChanged(this, System::EventArgs::Empty);
		this->chkCreateLODControlResource_CheckedChanged(this, System::EventArgs::Empty);
		this->chkCreateInformationResource_CheckedChanged(this, System::EventArgs::Empty);
	}

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}
	};
}