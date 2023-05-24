    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 100;
            section.data(100)  = dumData; %prealloc

                    ;% rtP.Battery1_BatType
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.uSolarPanelmodule_Npar
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.uSolarPanelmodule1_Npar
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Saturation_UpperSat
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Saturation_LowerSat
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant_Value
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant_Value_bbh4bssdud
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Constant_Value_n4vtv1gsyp
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Constant_Value_pnqn3bfzq5
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.StateSpace_DS_param
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.itinit1_InitialCondition
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 18;

                    ;% rtP.R2_Gain
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 19;

                    ;% rtP.Currentfilter_NumCoef
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 20;

                    ;% rtP.Currentfilter_DenCoef
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 21;

                    ;% rtP.Currentfilter_InitialStates
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 23;

                    ;% rtP.itinit_InitialCondition
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 24;

                    ;% rtP.inti_gainval
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 25;

                    ;% rtP.inti_UpperSat
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 26;

                    ;% rtP.inti_LowerSat
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 27;

                    ;% rtP.Gain_Gain
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 28;

                    ;% rtP.R3_Gain
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 29;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 30;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 31;

                    ;% rtP.Memory2_InitialCondition
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 32;

                    ;% rtP.UnitDelay_InitialCondition_byazrp2eng
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 33;

                    ;% rtP.Step_Time
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 34;

                    ;% rtP.Step_Y0
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 35;

                    ;% rtP.Step_YFinal
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 36;

                    ;% rtP.uSref_Gain
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 37;

                    ;% rtP.StateSpace_AS_param
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 38;

                    ;% rtP.StateSpace_BS_param
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 54;

                    ;% rtP.StateSpace_CS_param
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 78;

                    ;% rtP.StateSpace_DS_param_prg1zujvs3
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 102;

                    ;% rtP.StateSpace_X0_param
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 138;

                    ;% rtP.donotdeletethisgain_Gain
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 142;

                    ;% rtP.donotdeletethisgain_Gain_i0tbpdvq42
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 143;

                    ;% rtP.donotdeletethisgain_Gain_aakwgyoy4i
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 144;

                    ;% rtP.donotdeletethisgain_Gain_owllpgyom1
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 145;

                    ;% rtP.UnitDelay_InitialCondition_o1reyqyrtx
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 146;

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 147;

                    ;% rtP.donotdeletethisgain_Gain_gif4eynrja
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 148;

                    ;% rtP.Constant3_Value
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 149;

                    ;% rtP.Constant2_Value
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 150;

                    ;% rtP.uib1_Gain
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 151;

                    ;% rtP.donotdeletethisgain_Gain_ciqbkivldk
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 152;

                    ;% rtP.donotdeletethisgain_Gain_g2dyk24vif
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 153;

                    ;% rtP.donotdeletethisgain_Gain_gdixg4fwh0
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 154;

                    ;% rtP.Gain4_Gain
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 155;

                    ;% rtP.Gain1_Gain
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 156;

                    ;% rtP.Gain2_Gain
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 157;

                    ;% rtP.R1_Gain
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 158;

                    ;% rtP.SwitchCurrents_Value
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 159;

                    ;% rtP.u_K_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 161;

                    ;% rtP.Temperature_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 162;

                    ;% rtP.Tref_K_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 163;

                    ;% rtP.alpha_Isc_Gain
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 164;

                    ;% rtP.IL_module_Value
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 165;

                    ;% rtP.Rs_array_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 166;

                    ;% rtP.one1_Value
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 167;

                    ;% rtP.Tref_K1_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 168;

                    ;% rtP.dEgdT_Gain
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 169;

                    ;% rtP.EgRef_Gain
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 170;

                    ;% rtP.Tref_K2_Value
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 171;

                    ;% rtP.I0_array_Gain
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 172;

                    ;% rtP.EgRef_Value
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 173;

                    ;% rtP.k1_Gain
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 174;

                    ;% rtP.Rsh_array_Value
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 175;

                    ;% rtP.Rsh_array_5Sref_Value
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 176;

                    ;% rtP.VT_ref_array_Gain
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 177;

                    ;% rtP.one_Value
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 178;

                    ;% rtP.u_K_Value_pxwery2jsn
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 179;

                    ;% rtP.Constant2_Value_ijxamwyxru
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 180;

                    ;% rtP.uSref_Gain_i2bwmxyr3w
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 181;

                    ;% rtP.Temperature1_Value
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 182;

                    ;% rtP.Tref_K_Value_gszk5qry31
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 183;

                    ;% rtP.alpha_Isc_Gain_ecyq2y3zp1
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 184;

                    ;% rtP.IL_module_Value_fcyvgl0ruo
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 185;

                    ;% rtP.Rs_array_Value_i3gynv5auc
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 186;

                    ;% rtP.one1_Value_c5ubottqde
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 187;

                    ;% rtP.Tref_K1_Value_l0p1zui3pw
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 188;

                    ;% rtP.dEgdT_Gain_pzvewxc0mk
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 189;

                    ;% rtP.EgRef_Gain_fnkjuejdev
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 190;

                    ;% rtP.Tref_K2_Value_pctkqeb0jj
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 191;

                    ;% rtP.I0_array_Gain_k1y52gw4gn
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 192;

                    ;% rtP.EgRef_Value_lrhsg5awud
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 193;

                    ;% rtP.k1_Gain_k5ftzzatnv
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 194;

                    ;% rtP.Rsh_array_Value_bqlp4wcosc
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 195;

                    ;% rtP.Rsh_array_5Sref_Value_lkbpzhydcm
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 196;

                    ;% rtP.VT_ref_array_Gain_a0gmuram1c
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 197;

                    ;% rtP.one_Value_lrvrdzbc3o
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 198;

                    ;% rtP.Constant_Value_mfpmkkcvzy
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 199;

                    ;% rtP.Constant1_Value
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 200;

                    ;% rtP.Constant12_Value
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 201;

                    ;% rtP.Constant9_Value
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 202;

                    ;% rtP.Constant1_Value_adlo0r1pnz
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 203;

                    ;% rtP.Constant2_Value_fbpvb5zax4
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 204;

                    ;% rtP.Constant3_Value_bq22tlhptb
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 205;

                    ;% rtP.Constant4_Value
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 206;

                    ;% rtP.eee_Value
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 207;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 42;
            section.data(42)  = dumData; %prealloc

                    ;% rtB.opffrybcih
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.o5wrrem1qc
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.c1gxu3rrmx
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 5;

                    ;% rtB.cqz5woloyg
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtB.eskihpk02k
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtB.od5qrdcbcj
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtB.h4js3v5upa
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtB.mywmpmosnc
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtB.fk32bvs2ee
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtB.livt5jk2tf
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtB.pjzvjmxirm
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtB.fi5drgiklu
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtB.nlbivj4lf3
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtB.gs1rtf2e3u
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% rtB.huk3pt5r1v
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% rtB.dkuvq0253d
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 23;

                    ;% rtB.nwjgq25zbk
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 25;

                    ;% rtB.jq4n5kfwxa
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 26;

                    ;% rtB.iggnzu3gsi
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 27;

                    ;% rtB.cvvcberjjn
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 28;

                    ;% rtB.k0p2ap0ikd
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 29;

                    ;% rtB.iuz04crxul
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 30;

                    ;% rtB.nf0bwiard0
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 31;

                    ;% rtB.ixfpr1pnw5
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 32;

                    ;% rtB.dwlavih11j
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 33;

                    ;% rtB.dfa50jcwis
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 34;

                    ;% rtB.k5gofgmai0
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 35;

                    ;% rtB.aqm05n1pyd
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 36;

                    ;% rtB.intjutf0xv
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 37;

                    ;% rtB.etwjjxvghh
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 38;

                    ;% rtB.nmnnshb4os
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 39;

                    ;% rtB.jnas5s0pvv
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 40;

                    ;% rtB.hpegnktew3
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 41;

                    ;% rtB.lovagimr4o
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 42;

                    ;% rtB.pdyqixdn33
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 43;

                    ;% rtB.ksfxdzvis4
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 44;

                    ;% rtB.nutlppxsf5
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 45;

                    ;% rtB.gylnb1tie2
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 46;

                    ;% rtB.hoetqsvi5q
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 47;

                    ;% rtB.mkqlbqhydw
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 48;

                    ;% rtB.bmzumqbgtq
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 49;

                    ;% rtB.hikj040a31
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 50;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtDW.mfmnjfzu0e
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.fvss2djvki
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bhqjjurcih
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.o13ep0zjtp
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ilkonha3co
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.p0lr4eegs0
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.bqa3xzhwdv
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtDW.p2fq3uuisu
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtDW.lpmgf5dfgn
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtDW.orsz0vf0zs
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtDW.bmqhr21dyv
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtDW.l4ezf5ev5p
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtDW.f3qkmjhmlg
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtDW.pbbyn3soma
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtDW.eee25gfzar.AS
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.f1nkbdwyq1.AS
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.aensh01atu.LoggedData
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cn4deqbyi1.LoggedData
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 4;

                    ;% rtDW.cbstezcitj.LoggedData
                    section.data(5).logicalSrcIdx = 18;
                    section.data(5).dtTransOffset = 5;

                    ;% rtDW.anqx2zky0b.LoggedData
                    section.data(6).logicalSrcIdx = 19;
                    section.data(6).dtTransOffset = 6;

                    ;% rtDW.lvl5wod0vj.LoggedData
                    section.data(7).logicalSrcIdx = 20;
                    section.data(7).dtTransOffset = 7;

                    ;% rtDW.pyrz3b3p5q.LoggedData
                    section.data(8).logicalSrcIdx = 21;
                    section.data(8).dtTransOffset = 13;

                    ;% rtDW.nfecfav2wp.LoggedData
                    section.data(9).logicalSrcIdx = 22;
                    section.data(9).dtTransOffset = 15;

                    ;% rtDW.ieagsnlkpu.LoggedData
                    section.data(10).logicalSrcIdx = 23;
                    section.data(10).dtTransOffset = 16;

                    ;% rtDW.niebmbwwzh.LoggedData
                    section.data(11).logicalSrcIdx = 24;
                    section.data(11).dtTransOffset = 17;

                    ;% rtDW.aiuhviwtmb.LoggedData
                    section.data(12).logicalSrcIdx = 25;
                    section.data(12).dtTransOffset = 18;

                    ;% rtDW.mdgni2w3f0.LoggedData
                    section.data(13).logicalSrcIdx = 26;
                    section.data(13).dtTransOffset = 20;

                    ;% rtDW.k4hxqmk0k2.LoggedData
                    section.data(14).logicalSrcIdx = 27;
                    section.data(14).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.gq3kibtyax
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.fnv21h2jjw
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.edr1kgzwki
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.eg0cnsyviw
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.o5mh4otnpm
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gsmsqta5d1
                    section.data(2).logicalSrcIdx = 33;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.cirw445xfx
                    section.data(3).logicalSrcIdx = 34;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ggy3kolena
                    section.data(4).logicalSrcIdx = 35;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.ah1gqem3fu
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.occpczy502
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.oziueijlgt
                    section.data(3).logicalSrcIdx = 38;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.pp5mt2rwib
                    section.data(4).logicalSrcIdx = 39;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3358607682;
    targMap.checksum1 = 562655403;
    targMap.checksum2 = 109193308;
    targMap.checksum3 = 3957041904;

