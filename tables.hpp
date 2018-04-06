#pragma once
/*
    Look-up tables for sine and cosine
*/


/*
    Uncompressed look-up table for sin
*/
static const float32_t sin_table[] = {0.00000000000000000000000000000000,0.01837085402344529300000000000000,0.03673550757581835900000000000000,0.05508776227880984900000000000000,0.07342142393892985000000000000000,0.09173030463815200200000000000000,0.11000822482243947000000000000000,0.12824900799839434000000000000000,0.14644651976070211000000000000000,0.16459458863057688000000000000000,0.18268711876413540000000000000000,0.20071797428591504000000000000000,0.21868109872339905000000000000000,0.23657040008759228000000000000000,0.25437985504232014000000000000000,0.27210348128079986000000000000000,0.28973523928725631000000000000000,0.30726920687469117000000000000000,0.32469946604002781000000000000000,0.34202016178851408000000000000000,0.35922539190726172000000000000000,0.37630937753505889000000000000000,0.39326635254515746000000000000000,0.41009062086003922000000000000000,0.42677644942978954000000000000000,0.44331823391321834000000000000000,0.45971039118540097000000000000000,0.47594741483342301000000000000000,0.49202374597193138000000000000000,0.50793408853961131000000000000000,0.52367294308931611000000000000000,0.53923504938892552000000000000000,0.55461515497105029000000000000000,0.56980806879654311000000000000000,0.58480866300656009000000000000000,0.59961187465329779000000000000000,0.61421270740882095000000000000000,0.62860627960735216000000000000000,0.64278763978863773000000000000000,0.65675204854630131000000000000000,0.67049479266220890000000000000000,0.68401123373369732000000000000000,0.69729680973911068000000000000000,0.71034703657755860000000000000000,0.72315750958237346000000000000000,0.73572394537688524000000000000000,0.74804202104482909000000000000000,0.76010762020054867000000000000000,0.77191667050544910000000000000000,0.78346518621040162000000000000000,0.79474926950099956000000000000000,0.80576511181313437000000000000000,0.81650899511844965000000000000000,0.82697732669107138000000000000000,0.83716650537299730000000000000000,0.84707312656018197000000000000000,0.85669381585910154000000000000000,0.86602541835490165000000000000000,0.87506472110056432000000000000000,0.88380861739072569000000000000000,0.89225426946701480000000000000000,0.90039871720227560000000000000000,0.90823931738414931000000000000000,0.91577332195087480000000000000000,0.92299828580431575000000000000000,0.92991167665785723000000000000000,0.93651125082835018000000000000000,0.94279473496405175000000000000000,0.94875997060188433000000000000000,0.95440502177453956000000000000000,0.95972790994097390000000000000000,0.96472690760237534000000000000000,0.96940026265380330000000000000000,0.97374645839698293000000000000000,0.97776399652751744000000000000000,0.98145149819758915000000000000000,0.98480776665938874000000000000000,0.98783162557018644000000000000000,0.99052209356187693000000000000000,0.99287822764896971000000000000000,0.99489926316786326000000000000000,0.99658449176329167000000000000000,0.99793336650841657000000000000000,0.99894542010776222000000000000000,0.99962030768961707000000000000000,0.99995781022486407000000000000000,0.99995780942181756000000000000000,0.99962030528073820000000000000000,0.99894541609387433000000000000000,0.99793336089086404000000000000000,0.99658448454397064000000000000000,0.99489925434922066000000000000000,0.99287821723397163000000000000000,0.99052208155404886000000000000000,0.98783161197357106000000000000000,0.98480775147858535000000000000000,0.98145148143771122000000000000000,0.97776397819423189000000000000000,0.97374643849646747000000000000000,0.96940024119277468000000000000000,0.96472688458808720000000000000000,0.95972788538118381000000000000000,0.95440499567754689000000000000000,0.94875994297648714000000000000000,0.94279470581958413000000000000000,0.93651122017463895000000000000000,0.92991164450524866000000000000000,0.92299825216367148000000000000000,0.91577328683353965000000000000000,0.90823923091870828000000000000000,0.90039867916762051000000000000000,0.89225422999271531000000000000000,0.88380863226199979000000000000000,0.87506462108940009000000000000000,0.86602537464351048000000000000000,0.85669383225538587000000000000000,0.84707301674010427000000000000000,0.83716642495661520000000000000000,0.82697727753889771000000000000000,0.81650901346984106000000000000000,0.80576502473830292000000000000000,0.79474921644079910000000000000000,0.78346516892321960000000000000000,0.77191653914452374000000000000000,0.76010752466253095000000000000000,0.74804196302657899000000000000000,0.73572392653617569000000000000000,0.72315740803300044000000000000000,0.71034697504489142000000000000000,0.69729678979955778000000000000000,0.68401125692104903000000000000000,0.67049468358046216000000000000000,0.65675198262020440000000000000000,0.64278761847871035000000000000000,0.62860611890468221000000000000000,0.61421263841996110000000000000000,0.59961185239069570000000000000000,0.58480868879086312000000000000000,0.56980794797266221000000000000000,0.55461508222594258000000000000000,0.53923502596173511000000000000000,0.52367276705543808000000000000000,0.50793396189077933000000000000000,0.49202372175396958000000000000000,0.47594741657846351000000000000000,0.45971026061491382000000000000000,0.44331815555055837000000000000000,0.42677642427225981000000000000000,0.41009043240232979000000000000000,0.39326624476551308000000000000000,0.37630932415004625000000000000000,0.35922539375900608000000000000000,0.34201999562290136000000000000000,0.32469938335405385000000000000000,0.30726918040232398000000000000000,0.28973504151828433000000000000000,0.27210333980101159000000000000000,0.25437979931732257000000000000000,0.23657040201545701000000000000000,0.21868092617356830000000000000000,0.20071787404436045000000000000000,0.18268707676375748000000000000000,0.16459461998355981000000000000000,0.14644637431843885000000000000000,0.12824893607565879000000000000000,0.11000821198386271000000000000000,0.09173012113476922100000000000000,0.07342130703021693100000000000000,0.05508771218511490000000000000000,0.03673552444976949100000000000000,0.01837069957150915700000000000000,-0.00000008742278000372879500000000,-0.01837087438756272700000000000000,-0.03673569917731217500000000000000,-0.05508788676517441900000000000000,-0.07342148140387001800000000000000,-0.09173029524316227100000000000000,-0.11000838576822708000000000000000,-0.12824910947734361000000000000000,-0.14644654727891854000000000000000,-0.16459479244445088000000000000000,-0.18268724866685804000000000000000,-0.20071804533165072000000000000000,-0.21868109678723641000000000000000,-0.23657057189790850000000000000000,-0.25437996841122884000000000000000,-0.27210350804930100000000000000000,-0.28973520886417065000000000000000,-0.30726934678931284000000000000000,-0.32469954872599932000000000000000,-0.34202015992398804000000000000000,-0.35922555693376501000000000000000,-0.37630948614341792000000000000000,-0.39326640552282238000000000000000,-0.41009059186931884000000000000000,-0.42677658239508842000000000000000,-0.44331831227587493000000000000000,-0.45971041588982126000000000000000,-0.47594757035053453000000000000000,-0.49202387397132308000000000000000,-0.50793411250203979000000000000000,-0.52367291600977195000000000000000,-0.53923517320884584000000000000000,-0.55461522771615379000000000000000,-0.56980809165686908000000000000000,-0.58480883062054567000000000000000,-0.59961199231800821000000000000000,-0.61421277639767613000000000000000,-0.62860625488623023000000000000000,-0.64278775241816888000000000000000,-0.65675211447239312000000000000000,-0.67049481330087923000000000000000,-0.68401138446588317000000000000000,-0.69729691512578895000000000000000,-0.71034709811022023000000000000000,-0.72315752879589046000000000000000,-0.73572404495583710000000000000000,-0.74804207906307363000000000000000,-0.76010779320039412000000000000000,-0.77191665029801049000000000000000,-0.78346527757848061000000000000000,-0.79474946726642337000000000000000,-0.80576512828801417000000000000000,-0.81650911441388541000000000000000,-0.82697724179589782000000000000000,-0.83716652058807361000000000000000,-0.84707323638022347000000000000000,-0.85669379946281632000000000000000,-0.86602546206628606000000000000000,-0.87506482111169126000000000000000,-0.88380860251945070000000000000000,-0.89225430894130753000000000000000,-0.90039885896462180000000000000000,-0.90823930408304820000000000000000,-0.91577340495401438000000000000000,-0.92299822770050866000000000000000,-0.92991170881045870000000000000000,-0.93651132328128850000000000000000,-0.94279468462599825000000000000000,-0.94875999822727419000000000000000,-0.95440508345723929000000000000000,-0.95972790101115113000000000000000,-0.96472693061665615000000000000000,-0.96940034264308084000000000000000,-0.97374645116125047000000000000000,-0.97776401486079545000000000000000,-0.98145156066478167000000000000000,-0.98480776113972124000000000000000,-0.98783165770705239000000000000000,-0.99052207282206517000000000000000,-0.99287823806396025000000000000000,-0.99489928401153516000000000000000,-0.99658448913838160000000000000000,-0.99793337212596134000000000000000,-0.99894542959493826000000000000000,-0.99962030681376102000000000000000,-0.99995781102790293000000000000000,-0.99995780642864285000000000000000,-0.99962030615659603000000000000000,-0.99894540660663755000000000000000,-0.99793337059344278000000000000000,-0.99658448716888259000000000000000,-0.99489923350548837000000000000000,-0.99287823522265306000000000000000,-0.99052206954621325000000000000000,-0.98783157983664516000000000000000,-0.98480775699825451000000000000000,-0.98145146467782574000000000000000,-0.97776390986251782000000000000000,-0.97374644573220170000000000000000,-0.96940021973173873000000000000000,-0.96472679880938494000000000000000,-0.95972789431100824000000000000000,-0.95440493399478921000000000000000,-0.94875999069080741000000000000000,-0.94279467667510930000000000000000,-0.93651114772164368000000000000000,-0.92991170003892576000000000000000,-0.92299821852302033000000000000000,-0.91577320383034444000000000000000,-0.90823929410308801000000000000000,-0.90039864113295853000000000000000,-0.89225408286441921000000000000000,-0.88380859136137224000000000000000,-0.87506457877623756000000000000000,-0.86602545014140786000000000000000,-0.85669378716050615000000000000000,-0.84707297027694506000000000000000,-0.83716650754349220000000000000000,-0.82697722838671772000000000000000,-0.81650882535093050000000000000000,-0.80576511416334551000000000000000,-0.79474916338059265000000000000000,-0.78346496643372499000000000000000,-0.77191663513615083000000000000000,-0.76010746785544037000000000000000,-0.74804174678145507000000000000000,-0.73572386732633654000000000000000,-0.72315734765154716000000000000000,-0.71034708132352886000000000000000,-0.69729672713643420000000000000000,-0.68401101922904306000000000000000,-0.67049479560640235000000000000000,-0.65675191669410249000000000000000,-0.64278736886971610000000000000000,-0.62860623633770540000000000000000,-0.61421256943109659000000000000000,-0.59961159162276867000000000000000,-0.58480861787601512000000000000000,-0.56980787613055217000000000000000,-0.55461481109102728000000000000000,-0.53923495233817365000000000000000,-0.52367269257826510000000000000000,-0.50793409195795280000000000000000,-0.49202364564528717000000000000000,-0.47594713000951999000000000000000,-0.45971039470959074000000000000000,-0.44331807718789501000000000000000,-0.42677612959526906000000000000000,-0.41009057011726846000000000000000,-0.39326616438685391000000000000000,-0.37630902225993390000000000000000,-0.35922531217162246000000000000000,-0.34201991347235411000000000000000,-0.32469952616848480000000000000000,-0.30726909720882600000000000000000,-0.28973495784533781000000000000000,-0.27210348509943949000000000000000,-0.25437971477036653000000000000000,-0.23657008542330416000000000000000,-0.21868107351472593000000000000000,-0.20071778840071300000000000000000,-0.18268675640593701000000000000000,-0.16459453375311239000000000000000,-0.14644628783819733000000000000000,-0.12824861292508824000000000000000,-0.11000812509167926000000000000000,-0.09173003408057163500000000000000,-0.07342145761847956900000000000000,-0.05508762489508450800000000000000,-0.03673519882834391800000000000000,-0.01837085054182666800000000000000};

/*
    Uncompressed look-up table for sin
*/
static const float32_t cos_table[] = {1.00000000000000000000000000000000,0.99983124162152948000000000000000,0.99932502344489849000000000000000,0.99848151632722437000000000000000,0.99730100496629404000000000000000,0.99578388780447324000000000000000,0.99393067689422665000000000000000,0.99174199868082014000000000000000,0.98921858901355986000000000000000,0.98636130367808483000000000000000,0.98317110242198369000000000000000,0.97964906716566558000000000000000,0.97579638094283128000000000000000,0.97161435034811861000000000000000,0.96710438389485553000000000000000,0.96226799566174359000000000000000,0.95710683369995653000000000000000,0.95162263240561817000000000000000,0.94581724278706236000000000000000,0.93969261406598203000000000000000,0.93325083327531733000000000000000,0.92649406494546771000000000000000,0.91942458959711748000000000000000,0.91204478107307185000000000000000,0.90435715412225404000000000000000,0.89636429172522547000000000000000,0.88806889160479308000000000000000,0.87947373941089424000000000000000,0.87058177869729636000000000000000,0.86139593782385249000000000000000,0.85191939094973879000000000000000,0.84215530723882692000000000000000,0.83210698223031265000000000000000,0.82177780739951478000000000000000,0.81117126901319647000000000000000,0.80029094695289282000000000000000,0.78914051350664161000000000000000,0.77772369466167313000000000000000,0.76604441786031729000000000000000,0.75410658844107492000000000000000,0.74191423561814840000000000000000,0.72947147451158445000000000000000,0.71678250475835303000000000000000,0.70385160909490052000000000000000,0.69068315191165586000000000000000,0.67728153392741341000000000000000,0.66365136536525515000000000000000,0.64979720352819192000000000000000,0.63572372442420455000000000000000,0.62143567808446654000000000000000,0.60693788696013007000000000000000,0.59223524429466967000000000000000,0.57733271247233131000000000000000,0.56223527205155766000000000000000,0.54694811662676313000000000000000,0.53147635719715514000000000000000,0.51582526679949670000000000000000,0.49999997476321700000000000000000,0.48400592339886866000000000000000,0.46784861635564745000000000000000,0.45153329735234776000000000000000,0.43506568476552665000000000000000,0.41845112302104598000000000000000,0.40169543537742536000000000000000,0.38480405975287568000000000000000,0.36778291642675948000000000000000,0.35063752946870796000000000000000,0.33337379579694548000000000000000,0.31599765534495922000000000000000,0.29851474739372691000000000000000,0.28093119954951590000000000000000,0.26325271840563758000000000000000,0.24548550011505210000000000000000,0.22763531087977715000000000000000,0.20970829047640668000000000000000,0.19171060660721839000000000000000,0.17364810026990493000000000000000,0.15552710221489674000000000000000,0.13735349346047351000000000000000,0.11913364369749078000000000000000,0.10087346602572292000000000000000,0.08257936047767350200000000000000,0.06425726425221055200000000000000,0.04591348000017545600000000000000,0.02755431825531683500000000000000,0.00918573732994698580000000000000,-0.00918582474903860760000000000000,-0.02755440564490297900000000000000,-0.04591356733076097700000000000000,-0.06425735149431946500000000000000,-0.08257944760185996500000000000000,-0.10087355300258194000000000000000,-0.11913373049766519000000000000000,-0.13735358005466805000000000000000,-0.15552718857388301000000000000000,-0.17364818636453699000000000000000,-0.19171069240843608000000000000000,-0.20970837595525263000000000000000,-0.22763539600739868000000000000000,-0.24548558486271707000000000000000,-0.26325280274474477000000000000000,-0.28093128345159679000000000000000,-0.29851483083046598000000000000000,-0.31599773828819216000000000000000,-0.33337387821868092000000000000000,-0.35063761134112370000000000000000,-0.36778299772222200000000000000000,-0.38480414044395028000000000000000,-0.40169551543687348000000000000000,-0.41845131069240687000000000000000,-0.43506576348088399000000000000000,-0.45153337535569477000000000000000,-0.46784858826245618000000000000000,-0.48400610421529267000000000000000,-0.50000005047356477000000000000000,-0.51582523956819026000000000000000,-0.53147653222961699000000000000000,-0.54694823971319262000000000000000,-0.56223534434821232000000000000000,-0.57733268651836001000000000000000,-0.59223536276423261000000000000000,-0.60693795643931825000000000000000,-0.62143569987900671000000000000000,-0.63572388392693013000000000000000,-0.64979731528485085000000000000000,-0.66365143076116562000000000000000,-0.67728155439388138000000000000000,-0.69068325823563481000000000000000,-0.70385167119541059000000000000000,-0.71678252415584975000000000000000,-0.72947145276925451000000000000000,-0.74191433419926311000000000000000,-0.75410664585616194000000000000000,-0.76604443574147052000000000000000,-0.77772382455187294000000000000000,-0.78914056720282100000000000000000,-0.80029096363297680000000000000000,-0.81117125042416993000000000000000,-0.82177789117691891000000000000000,-0.83210703071630809000000000000000,-0.84215532223934009000000000000000,-0.85191949915734455000000000000000,-0.86139601250408415000000000000000,-0.87058179238447919000000000000000,-0.87947373846652555000000000000000,-0.88806895919481843000000000000000,-0.89636433048133446000000000000000,-0.90435716599437865000000000000000,-0.91204486581092603000000000000000,-0.91942463569779964000000000000000,-0.92649408662858468000000000000000,-0.93325083256254693000000000000000,-0.93969267454530603000000000000000,-0.94581727117318870000000000000000,-0.95162264095327409000000000000000,-0.95710689356852829000000000000000,-0.96226803566840735000000000000000,-0.96710439855233765000000000000000,-0.97161434987871864000000000000000,-0.97579641961213937000000000000000,-0.97964908770391468000000000000000,-0.98317111022624792000000000000000,-0.98636129844619691000000000000000,-0.98921861054520388000000000000000,-0.99174200798164314000000000000000,-0.99393067831519999000000000000000,-0.99578390470854694000000000000000,-0.99730101357312106000000000000000,-0.99848151909096938000000000000000,-0.99932502282460656000000000000000,-0.99983124445941041000000000000000,-0.99999999999999623000000000000000,-0.99983124124735989000000000000000,-0.99932501640154792000000000000000,-0.99848150945911229000000000000000,-0.99730100073571626000000000000000,-0.99578388866992740000000000000000,-0.99393065908073730000000000000000,-0.99174198555787096000000000000000,-0.98921858493969039000000000000000,-0.98636126966754334000000000000000,-0.98317107828420869000000000000000,-0.97964905260927060000000000000000,-0.97579638137673541000000000000000,-0.97161430851541930000000000000000,-0.96710435407514439000000000000000,-0.96226798809233183000000000000000,-0.95710684290962800000000000000000,-0.95162258722860771000000000000000,-0.94581721440092870000000000000000,-0.93969261474461407000000000000000,-0.93325076975356758000000000000000,-0.92649402083255605000000000000000,-0.91942456693692876000000000000000,-0.91204479410842088000000000000000,-0.90435709137440190000000000000000,-0.89636425296910960000000000000000,-0.88806887881650687000000000000000,-0.87947365524921950000000000000000,-0.87058170635630272000000000000000,-0.86139592369407303000000000000000,-0.85191940759547335000000000000000,-0.84215522795647713000000000000000,-0.83210693374431077000000000000000,-0.82177779154851649000000000000000,-0.81117114817295488000000000000000,-0.80029085879349438000000000000000,-0.78914045981045622000000000000000,-0.77772371464287227000000000000000,-0.76604432335289774000000000000000,-0.75410653102598213000000000000000,-0.74191421696623328000000000000000,-0.72947133317291213000000000000000,-0.71678240223659107000000000000000,-0.70385154699438512000000000000000,-0.69068313179476226000000000000000,-0.67728142575580907000000000000000,-0.66365129996933958000000000000000,-0.64979700115961359000000000000000,-0.63572374896074080000000000000000,-0.62143556289359103000000000000000,-0.60693762799791573000000000000000,-0.59223522187978650000000000000000,-0.57733254375537546000000000000000,-0.56223539692165347000000000000000,-0.54694809333835182000000000000000,-0.53147618216467052000000000000000,-0.51582529403080257000000000000000,-0.49999989905286546000000000000000,-0.48400574258242401000000000000000,-0.46784864444883828000000000000000,-0.45153321934899732000000000000000,-0.43506539137836181000000000000000,-0.41845115189080351000000000000000,-0.40169524614928004000000000000000,-0.38480419912173502000000000000000,-0.36778283513129412000000000000000,-0.35063733595544255000000000000000,-0.33337393815498606000000000000000,-0.31599757240172383000000000000000,-0.29851455018303569000000000000000,-0.28093123005591614000000000000000,-0.26325263406652838000000000000000,-0.24548518424433996000000000000000,-0.22763534183177811000000000000000,-0.20970820499755910000000000000000,-0.19171028680971813000000000000000,-0.17364813157350634000000000000000,-0.15552689809720024000000000000000,-0.13735364302514699000000000000000,-0.11913355689731546000000000000000,-0.10087326044762703000000000000000,-0.08257939215561592400000000000000,-0.06425717701010114100000000000000,-0.04591327358601494900000000000000,-0.02755435002975727500000000000000,-0.00918564991085529460000000000000,0.00918615057664978920000000000000,0.02755437387046258700000000000000,0.04591377374491869400000000000000,0.06425720081057345600000000000000,0.08257941592391769600000000000000,0.10087375858067171000000000000000,0.11913358057722402000000000000000,0.13735366664886156000000000000000,0.15552739269157004000000000000000,0.17364815506093592000000000000000,0.19171077820965229000000000000000,0.20970869455118504000000000000000,0.22763536505539811000000000000000,0.24548566961038015000000000000000,0.26325311709265004000000000000000,0.28093125294519705000000000000000,0.29851502804113905000000000000000,0.31599759502942282000000000000000,0.33337396064041380000000000000000,0.35063780485436780000000000000000,0.36778285730946597000000000000000,0.38480422113502194000000000000000,0.40169570466499444000000000000000,0.41845117355209366000000000000000,0.43506584219623795000000000000000,0.45153366608900175000000000000000,0.46784866552746202000000000000000,0.48400618071587265000000000000000,0.49999991970736551000000000000000,0.51582531446274471000000000000000,0.53147660628309290000000000000000,0.54694811330457305000000000000000,0.56223541664486287000000000000000,0.57733295257073602000000000000000,0.59223524109709202000000000000000,0.60693802591850188000000000000000,0.62143595516432926000000000000000,0.63572376737076819000000000000000,0.64979738173556134000000000000000,0.66365167450414031000000000000000,0.67728161871290971000000000000000,0.69068332145606315000000000000000,0.70385156393599346000000000000000,0.71678258511547088000000000000000,0.72947167564837334000000000000000,0.74191423295737413000000000000000,0.75410670327124307000000000000000,0.76604464518822113000000000000000,0.77772372963498093000000000000000,0.78914062089899439000000000000000,0.80029115901127523000000000000000,0.81117130154976813000000000000000,0.82177794099111057000000000000000,0.83210721143279609000000000000000,0.84215536938076196000000000000000,0.85191954493827049000000000000000,0.86139593580817986000000000000000,0.87058183539855738000000000000000,0.87947389354983185000000000000000,0.88806888978049014000000000000000,0.89636436923743656000000000000000,0.90435730505574075000000000000000,0.91204480388898312000000000000000,0.91942467007822448000000000000000,0.92649420924567716000000000000000,0.93325086396702595000000000000000,0.93969270444564135000000000000000,0.94581722214493502000000000000000,0.95162266781559646000000000000000,0.95710691889796740000000000000000,0.96226799458193513000000000000000,0.96710442079092318000000000000000,0.97161442696308842000000000000000,0.97579638659222701000000000000000,0.97964910525122550000000000000000,0.98317116975320118000000000000000,0.98636131283551243000000000000000,0.98921862334794919000000000000000,0.99174204977039815000000000000000,0.99393068793241990000000000000000,0.99578391272784539000000000000000,0.99730100248680076000000000000000,0.99848152390688660000000000000000,0.99932503479450674000000000000000,0.99983124168550053000000000000000};

/*
    Compressed look-up table for sin
*/
static const float sin_table_compressed[] = {1.00000000000000000000000000000000f,0.01826405855842210000000000000000f,0.03652202416010146000000000000000f,0.05476780402107844800000000000000f,0.07299531686137882000000000000000f,0.09119847819199991500000000000000f,0.10937120796461404000000000000000f,0.12750746590404152000000000000000f,0.14560117210069465000000000000000f,0.16364630524346363000000000000000f,0.18163686006689897000000000000000f,0.19956680550620631000000000000000f,0.21743017476994117000000000000000f,0.23522102305948442000000000000000f,0.25293340067530484000000000000000f,0.27056138435202604000000000000000f,0.28809910781647358000000000000000f,0.30554072042352870000000000000000f,0.32288040359098652000000000000000f,0.34011240076630622000000000000000f,0.35723090706396093000000000000000f,0.37423023989722976000000000000000f,0.39110472822996778000000000000000f,0.40784874267458687000000000000000f,0.42445669737003849000000000000000f,0.44092307859419894000000000000000f,0.45724233937203823000000000000000f,0.47340906252625820000000000000000f,0.48941788077127596000000000000000f,0.50526340126977920000000000000000f,0.52094036415256084000000000000000f,0.53644353953065882000000000000000f,0.55176775549122270000000000000000f,0.56690789982288192000000000000000f,0.58185892172119713000000000000000f,0.59661583347362557000000000000000f,0.61117371212344007000000000000000f,0.62552770111204359000000000000000f,0.63967305771407335000000000000000f,0.65360497067111367000000000000000f,0.66731883875254416000000000000000f,0.68081008696460843000000000000000f,0.69407421458030749000000000000000f,0.70710679664085752000000000000000f,0.71990348543187177000000000000000f,0.73246001193377297000000000000000f,0.74477218724595273000000000000000f,0.75683590398420364000000000000000f,0.76864713765095671000000000000000f,0.78020198526222340000000000000000f,0.79149651666909504000000000000000f,0.80252700210436767000000000000000f,0.81328976176000367000000000000000f,0.82378120514220965000000000000000f,0.83399783226923863000000000000000f,0.84393623483899516000000000000000f,0.85359312841651869000000000000000f,0.86296519828773299000000000000000f,0.87204944021036157000000000000000f,0.88084270509446894000000000000000f,0.88934217423527839000000000000000f,0.89754490125675179000000000000000f,0.90544825675261709000000000000000f,0.91304950099208992000000000000000f,0.92034619737582646000000000000000f,0.92733586108564237000000000000000f,0.93401611774513416000000000000000f,0.94038482598001083000000000000000f,0.94643977805129154000000000000000f,0.95217903302775797000000000000000f,0.95760060137299763000000000000000f,0.96270274518865417000000000000000f,0.96748369579552707000000000000000f,0.97194192064700369000000000000000f,0.97607587428104903000000000000000f,0.97988423154767501000000000000000f,0.98336569391692152000000000000000f,0.98651908044518866000000000000000f,0.98934338030591917000000000000000f,0.99183761444391594000000000000000f,0.99400098332569831000000000000000f,0.99583273701051955000000000000000f,0.99733228832479504000000000000000f,0.99849911744287601000000000000000f,0.99933285033454144000000000000000f,0.99983319798284520000000000000000f};