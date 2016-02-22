
float           cc_gain_tab[120][4] = {
    {181.01947021484375000000, 32767.93750000000000000000, 1073740736.00000000000000000000, 1152921504606846976.00000000000000000000},
    {165.99557495117187500000, 27554.44140625000000000000, 759249344.00000000000000000000, 576460752303423488.00000000000000000000},
    {152.21861267089843750000, 23170.43164062500000000000, 536870368.00000000000000000000, 288230376151711744.00000000000000000000},
    {139.58508300781250000000, 19483.93359375000000000000, 379624704.00000000000000000000, 144115188075855872.00000000000000000000},
    {128.00009155273437500000, 16383.97070312500000000000, 268435200.00000000000000000000, 72057594037927936.00000000000000000000},
    {117.37659454345703125000, 13777.22265625000000000000, 189812352.00000000000000000000, 36028797018963968.00000000000000000000},
    {107.63481140136718750000, 11585.21777343750000000000, 134217600.00000000000000000000, 18014398509481984.00000000000000000000},
    {98.70155334472656250000, 9741.96777343750000000000, 94906176.00000000000000000000, 9007199254740992.00000000000000000000},
    {90.50972747802734375000, 8191.98632812500000000000, 67108804.00000000000000000000, 4503599627370496.00000000000000000000},
    {82.99777984619140625000, 6888.61230468750000000000, 47453092.00000000000000000000, 2251799813685248.00000000000000000000},
    {76.10929870605468750000, 5792.60937500000000000000, 33554404.00000000000000000000, 1125899906842624.00000000000000000000},
    {69.79253387451171875000, 4870.98486328125000000000, 23726546.00000000000000000000, 562949953421312.00000000000000000000},
    {64.00003814697265625000, 4095.99365234375000000000, 16777202.00000000000000000000, 281474976710656.00000000000000000000},
    {58.68829345703125000000, 3444.30664062500000000000, 11863274.00000000000000000000, 140737488355328.00000000000000000000},
    {53.81740188598632812500, 2896.30517578125000000000, 8388601.50000000000000000000, 70368744177664.00000000000000000000},
    {49.35077285766601562500, 2435.49267578125000000000, 5931637.00000000000000000000, 35184372088832.00000000000000000000},
    {45.25485610961914062500, 2047.99707031250000000000, 4194300.75000000000000000000, 17592186044416.00000000000000000000},
    {41.49888610839843750000, 1722.15344238281250000000, 2965818.50000000000000000000, 8796093022208.00000000000000000000},
    {38.05464553833007812500, 1448.15270996093750000000, 2097150.50000000000000000000, 4398046511104.00000000000000000000},
    {34.89626312255859375000, 1217.74645996093750000000, 1482909.37500000000000000000, 2199023255552.00000000000000000000},
    {32.00001525878906250000, 1023.99871826171875000000, 1048575.31250000000000000000, 1099511627776.00000000000000000000},
    {29.34414291381835937500, 861.07684326171875000000, 741454.68750000000000000000, 549755813888.00000000000000000000},
    {26.90869712829589843750, 724.07647705078125000000, 524287.65625000000000000000, 274877906944.00000000000000000000},
    {24.67538452148437500000, 608.87335205078125000000, 370727.37500000000000000000, 137438953472.00000000000000000000},
    {22.62742614746093750000, 511.99942016601562500000, 262143.84375000000000000000, 68719476736.00000000000000000000},
    {20.74944114685058593750, 430.53848266601562500000, 185363.68750000000000000000, 34359738368.00000000000000000000},
    {19.02732086181640625000, 362.03826904296875000000, 131071.92187500000000000000, 17179869184.00000000000000000000},
    {17.44813156127929687500, 304.43670654296875000000, 92681.85156250000000000000, 8589934592.00000000000000000000},
    {16.00000572204589843750, 255.99974060058593750000, 65535.96484375000000000000, 4294967296.00000000000000000000},
    {14.67207050323486328125, 215.26927185058593750000, 46340.92578125000000000000, 2147483648.00000000000000000000},
    {13.45434761047363281250, 181.01916503906250000000, 32767.98242187500000000000, 1073741824.00000000000000000000},
    {12.33769130706787109375, 152.21836853027343750000, 23170.46289062500000000000, 536870912.00000000000000000000},
    {11.31371212005615234375, 127.99988555908203125000, 16383.99218750000000000000, 268435456.00000000000000000000},
    {10.37471961975097656250, 107.63465118408203125000, 11585.23242187500000000000, 134217728.00000000000000000000},
    {9.51365947723388671875, 90.50959014892578125000, 8191.99658203125000000000, 67108864.00000000000000000000},
    {8.72406482696533203125, 76.10919189453125000000, 5792.61621093750000000000, 33554432.00000000000000000000},
    {8.00000190734863281250, 63.99995040893554687500, 4095.99829101562500000000, 16777216.00000000000000000000},
    {7.33603429794311523438, 53.81732940673828125000, 2896.30834960937500000000, 8388608.00000000000000000000},
    {6.72717332839965820312, 45.25480270385742187500, 2047.99926757812500000000, 4194304.00000000000000000000},
    {6.16884469985961914062, 38.05460357666015625000, 1448.15417480468750000000, 2097152.00000000000000000000},
    {5.65685558319091796875, 31.99997901916503906250, 1023.99963378906250000000, 1048576.00000000000000000000},
    {5.18735933303833007812, 26.90866851806640625000, 724.07708740234375000000, 524288.00000000000000000000},
    {4.75682926177978515625, 22.62740325927734375000, 511.99984741210937500000, 262144.00000000000000000000},
    {4.36203193664550781250, 19.02730369567871093750, 362.03857421875000000000, 131072.00000000000000000000},
    {4.00000095367431640625, 15.99999141693115234375, 255.99992370605468750000, 65536.00000000000000000000},
    {3.66801691055297851562, 13.45433616638183593750, 181.01928710937500000000, 32768.00000000000000000000},
    {3.36358618736267089844, 11.31370353698730468750, 127.99996948242187500000, 16384.00000000000000000000},
    {3.08442211151123046875, 9.51365280151367187500, 90.50965118408203125000, 8192.00000000000000000000},
    {2.82842755317687988281, 7.99999713897705078125, 63.99998855590820312500, 4096.00000000000000000000},
    {2.59367942810058593750, 6.72716903686523437500, 45.25482559204101562500, 2048.00000000000000000000},
    {2.37841463088989257812, 5.65685224533081054688, 31.99999427795410156250, 1024.00000000000000000000},
    {2.18101572990417480469, 4.75682687759399414062, 22.62741279602050781250, 512.00000000000000000000},
    {2.00000023841857910156, 3.99999904632568359375, 15.99999809265136718750, 256.00000000000000000000},
    {1.83400821685791015625, 3.36358499526977539062, 11.31370735168457031250, 128.00000000000000000000},
    {1.68179297447204589844, 2.82842659950256347656, 7.99999904632568359375, 64.00000000000000000000},
    {1.54221093654632568359, 2.37841391563415527344, 5.65685367584228515625, 32.00000000000000000000},
    {1.41421365737915039062, 1.99999976158142089844, 3.99999976158142089844, 16.00000000000000000000},
    {1.29683959484100341797, 1.68179261684417724609, 2.82842707633972167969, 8.00000000000000000000},
    {1.18920719623565673828, 1.41421341896057128906, 1.99999988079071044922, 4.00000000000000000000},
    {1.09050774574279785156, 1.18920707702636718750, 1.41421353816986083984, 2.00000000000000000000},
    {1.00000000000000000000, 1.00000000000000000000, 1.00000000000000000000, 1.00000000000000000000},
    {0.91700404882431030273, 0.84089642763137817383, 0.70710676908493041992, 0.50000000000000000000},
    {0.84089636802673339844, 0.70710682868957519531, 0.50000000000000000000, 0.25000000000000000000},
    {0.77110540866851806641, 0.59460359811782836914, 0.35355341434478759766, 0.12500000000000000000},
    {0.70710676908493041992, 0.50000005960464477539, 0.25000002980232238770, 0.06250000000000000000},
    {0.64841973781585693359, 0.42044827342033386230, 0.17677670717239379883, 0.03125000000000000000},
    {0.59460353851318359375, 0.35355344414710998535, 0.12500001490116119385, 0.01562500000000000000},
    {0.54525381326675415039, 0.29730185866355895996, 0.08838836103677749634, 0.00781250000000000000},
    {0.49999994039535522461, 0.25000005960464477539, 0.06250000745058059692, 0.00390625000000000000},
    {0.45850196480751037598, 0.21022416651248931885, 0.04419418051838874817, 0.00195312500000000000},
    {0.42044815421104431152, 0.17677675187587738037, 0.03125000372529029846, 0.00097656250000000000},
    {0.38555264472961425781, 0.14865094423294067383, 0.02209709025919437408, 0.00048828125000000000},
    {0.35355332493782043457, 0.12500004470348358154, 0.01562500372529029846, 0.00024414062500000000},
    {0.32420983910560607910, 0.10511209815740585327, 0.01104854606091976166, 0.00012207031250000000},
    {0.29730173945426940918, 0.08838839083909988403, 0.00781250186264514923, 0.00006103515625000000},
    {0.27262687683105468750, 0.07432547956705093384, 0.00552427303045988083, 0.00003051757812500000},
    {0.24999995529651641846, 0.06250002980232238770, 0.00390625093132257462, 0.00001525878906250000},
    {0.22925096750259399414, 0.05255605280399322510, 0.00276213674806058407, 0.00000762939453125000},
    {0.21022406220436096191, 0.04419419914484024048, 0.00195312569849193096, 0.00000381469726562500},
    {0.19277630746364593506, 0.03716274350881576538, 0.00138106837403029203, 0.00000190734863281250},
    {0.17677664756774902344, 0.03125001862645149231, 0.00097656284924596548, 0.00000095367431640625},
    {0.16210490465164184570, 0.02627803012728691101, 0.00069053418701514602, 0.00000047683715820312},
    {0.14865085482597351074, 0.02209710329771041870, 0.00048828142462298274, 0.00000023841857910156},
    {0.13631342351436614990, 0.01858137547969818115, 0.00034526712261140347, 0.00000011920928955078},
    {0.12499996274709701538, 0.01562501117587089539, 0.00024414071231149137, 0.00000005960464477539},
    {0.11462546885013580322, 0.01313901692628860474, 0.00017263356130570173, 0.00000002980232238770},
    {0.10511201620101928711, 0.01104855258017778397, 0.00012207037070766091, 0.00000001490116119385},
    {0.09638814628124237061, 0.00929068867117166519, 0.00008631678792880848, 0.00000000745058059692},
    {0.08838831633329391479, 0.00781250745058059692, 0.00006103518535383046, 0.00000000372529029846},
    {0.08105244487524032593, 0.00656950939446687698, 0.00004315839396440424, 0.00000000186264514923},
    {0.07432541996240615845, 0.00552427722141146660, 0.00003051759267691523, 0.00000000093132257462},
    {0.06815670430660247803, 0.00464534480124711990, 0.00002157919698220212, 0.00000000046566128731},
    {0.06249997764825820923, 0.00390625419095158577, 0.00001525879815744702, 0.00000000023283064365},
    {0.05731273069977760315, 0.00328475516289472580, 0.00001078959940059576, 0.00000000011641532183},
    {0.05255600437521934509, 0.00276213884353637695, 0.00000762939907872351, 0.00000000005820766091},
    {0.04819406941533088684, 0.00232267263345420361, 0.00000539479970029788, 0.00000000002910383046},
    {0.04419415444135665894, 0.00195312732830643654, 0.00000381469953936175, 0.00000000001455191523},
    {0.04052621871232986450, 0.00164237769786268473, 0.00000269740007752262, 0.00000000000727595761},
    {0.03716270625591278076, 0.00138106965459883213, 0.00000190734976968088, 0.00000000000363797881},
    {0.03407835215330123901, 0.00116133654955774546, 0.00000134870003876131, 0.00000000000181898940},
    {0.03124998509883880615, 0.00097656378056854010, 0.00000095367499852728, 0.00000000000090949470},
    {0.02865636162459850311, 0.00082118896534666419, 0.00000067435007622407, 0.00000000000045474735},
    {0.02627800032496452332, 0.00069053488550707698, 0.00000047683749926364, 0.00000000000022737368},
    {0.02409703098237514496, 0.00058066833298653364, 0.00000033717503811204, 0.00000000000011368684},
    {0.02209707535803318024, 0.00048828194849193096, 0.00000023841874963182, 0.00000000000005684342},
    {0.02026310749351978302, 0.00041059454088099301, 0.00000016858751905602, 0.00000000000002842171},
    {0.01858135126531124115, 0.00034526750096119940, 0.00000011920938902676, 0.00000000000001421085},
    {0.01703917421400547028, 0.00029033419559709728, 0.00000008429376663344, 0.00000000000000710543},
    {0.01562499068677425385, 0.00024414100334979594, 0.00000005960469451338, 0.00000000000000355271},
    {0.01432817988097667694, 0.00020529729954432696, 0.00000004214688331672, 0.00000000000000177636},
    {0.01313899829983711243, 0.00017263376503251493, 0.00000002980234725669, 0.00000000000000088818},
    {0.01204851455986499786, 0.00014516712690237910, 0.00000002107344343472, 0.00000000000000044409},
    {0.01104853674769401550, 0.00012207051622681320, 0.00000001490117362835, 0.00000000000000022204},
    {0.01013155281543731689, 0.00010264866432407871, 0.00000001053672171736, 0.00000000000000011102},
    {0.00929067470133304596, 0.00008631689706817269, 0.00000000745058770235, 0.00000000000000005551},
    {0.00851958617568016052, 0.00007258357072714716, 0.00000000526836085868, 0.00000000000000002776},
    {0.00781249487772583961, 0.00006103526538936421, 0.00000000372529385118, 0.00000000000000001388},
    {0.00716408900916576385, 0.00005132433580001816, 0.00000000263418065138, 0.00000000000000000694},
    {0.00656949868425726891, 0.00004315845217206515, 0.00000000186264692559, 0.00000000000000000347},
    {0.00602425681427121162, 0.00003629178900155239, 0.00000000131709032569, 0.00000000000000000173}
};
