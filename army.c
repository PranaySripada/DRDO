#include<stdio.h>
main()
{
	int a,b,c,d,e,n,f;
	int ch,ch1;
	printf("1.RANKS GIVEN IN ARMY\n2.WEAPONS USED BY CADETS\n3.VECHILES USED BY CADETS\n");
	printf("\n Enter your choice: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("1.OFFICERS\n2.JCO(JUNIOR COMMISIONED OFFICER)\n3.OTHER RANKS\n");
		       do
		       {
		       printf("Enter your choice: ");
		       scanf("\n%d",&b);
		       switch(b)
		       {
		       	case 1:printf("1.MARSHAL OFFICER\n\tAshoka Emblem over a crossed Sword and Baton in a lotus blossom wreath\n2.GENERAL\n\tCrossed Sword and Baton with Star and Ashoka Emblem above\n3.LIEUTENANT GENERAL\n\tCrossed Sword and Baton with Ashoka Emblem above\n4.MAJOR GENERAL\n\tCrossed Sword and Baton with Stars above\n5.BRIGADLIER\n\tThree Stars worn in a triangle with Ashoka Emblem above\n6.COLONEL\n\tTwo Stars and Ashoka Emblem above\n7.LIEUTENANT COLONEL\n\tOne Star and Ashoka Emblem above\n8.MAJOR\n\tAshoka Emblem\n9.CAPTAIN\n\tThree Stars in one line\n10.LIEUTENANT\n\tTwo Stars in one line\n");
		       	scanf("%d",&c);
		       	switch(c)
		       	{
		       		case 1:printf("1.NAME:SANDEEP\nNO:132650\nD.O.B:27-05-1985\nBATCH:2016\n\n2.NAME:SIKINDER SINGH\nNO:132651\nD.O.B:16-03-1986\nBATCH:2016\n\n3.NAME:JAIMAL SINGH\nNO:132652\nD.O.B:27-03-1986\nBATCH:2016\n\n");
				    break;
				    case 2:printf("1.NAME:TILAK\nNO:132653\nD.O.B:14-07-1987\nBATCH:2017\n\n2.NAME:VASANTH KUMAR\nNO:132654\nD.O.B:12-06-1988\nBATCH:2017\n\n3.NAME:MANOJ KUMAR\nNO:132655\nD.O.B:19-01-1988\nBATCH:2017\n\n");
				    break;
				    case 3:printf("1.NAME:GURU\nNO:132656\nD.O.B:02-02-1989\nBATCH:2018\n\n2.NAME:NASSER\nNO:132657\nD.O.B:11-02-1989\nBATCH:2018\n\n3.NAME:VIJAY\nNO:132658\nD.O.B:12-03-1989\nBATCH:2018\n\n");
				    break;
				    case 4:printf("1.NAME:SUBRAMANIAM\nNO:132659\nD.O.B:30-05-1989\nBATCH:2018\n\n2.NAME:NARAYAN\nNO:132660\nD.O.B:16-06-1989\nBATCH:2018\n\n3.NAME:RAMESH YADAV\nNO:132661nD.O.B:29-08-1989\nBATCH:2018\n\n");
				    break;
				    case 5:printf("1.NAME:KOUSHAL RAWAT\nNO:132662\nD.O.B:1-05-1987\nBATCH:2018\n\n2.NAME:SANJAY RAJPUT\nNO:132663\nD.O.B:16-03-1990\nBATCH:2017\n\n3.NAME:SANTHOSH\nNO:132664\nD.O.B:27-08-1989\nBATCH:2018\n\n4.NAME:VEERA REDDY\nNO:132665\nD.O.B:29-07-1991\nBATCH:2018\n\n");
				    break;
				    case 6:printf("1.NAME:PRADEEP SINGH\nNO:132666\nD.O.B:27-06-1988\nBATCH:2017\n\n2.NAME:KANKAJ KUMAR\nNO:132667\nD.O.B:19-04-1990\nBATCH:2018\n\n3.NAME:CHANDRA SENUDU\nNO:132668\nD.O.B:27-09-1990\nBATCH:2017\n\n4.NAME:SOMESHWAR RAO\nNO:132669\nD.O.B:16-08-1992\nBATCH:2017\n\n");
				    break;
				    case 7:printf("1.NAME:SHYAM BABU\nNO:132669\nD.O.B:23-12-1989\nBATCH:2018\n\n2.NAME:RATAN KUMAR\nNO:132670\nD.O.B:11-05-1989\nBATCH:2016\n\n3.NAME:MALIVELAPPA\nNO:132671\nD.O.B:23-10-1990\nBATCH:2016\n\n4.NAME:SATISH\nNO:132672\nD.O.B:18-09-1992\nBATCH:2017\n\n");
				    break;
				    case 8:printf("1.NAME:AJIT KUMAR\nNO:132673\nD.O.B:25-11-1990\nBATCH:2016\n\n2.NAME:KULWINDER SINGH\nNO:132674\nD.O.B:19-04-1989\nBATCH:2018\n\n3.NAME:KHAJAVALI\nNO:132675\nD.O.B:17-12-1991\nBATCH:2016\n\n4.NAME:ROHITASH\nNO:132676\nD.O.B:19-10-1991\nBATCH:2018\n\n5.NAME:BABLU SANTRA\nNO:132677\nD.O.B:10-05-1992\nBATCH:2019\n\n");
				    break;
				    case 9:printf("1.NAME:MANIDER SINGH\nNO:132678\nD.O.B:31-10-1989\nBATCH:2017\n\n2.NAME:RAM VAKEEL\nNO:132679\nD.O.B:18-09-1990\nBATCH:2016\n\n3.NAME:SRI KUMAR\nNO:132680\nD.O.B:19-06-1992\nBATCH:2017\n\n4.NAME:BEHRA MANOJA\nNO:132681\nD.O.B:20-11-1990\nBATCH:2019\n\n5.NAME:VIRENDRA\nNO:132682\nD.O.B:22-07-1992\nBATCH:2019\n\n");
				    break;
				    case 10:printf("1.NAME:MOURYA VIJAY\nNO:132683\nD.O.B:12-07-1990\nBATCH:2019\n\n2.NAME:SANJAY KUMAR\nNO:132684\nD.O.B:29-11-1988\nBATCH:2018\n\n3.NAME:CHANDRAIAH\nNO:132684\nD.O.B:28-08-1994\nBATCH:2018\n\n4.NAME:NITIN SHIVAJI\nNO:132685\nD.O.B:26-12-1990\nBATCH:2019\n\n5.NAME:JEET RAM\nNO:132686\nD.O.B:14-03-1992\nBATCH:2019\n\n");
				    break;
				}
				break;
			   case 2:printf("1.SUBEDAR MAJOR\n\tAshoka Embelm\n2.SUBEDAR\n\tTwo Stars in one line\n3.Naib Suberdar\n\tOne Star\n");
			   scanf("%d",&d);
			   switch(d)
			   {
			   		case 1:printf("1.NAME:BALWAN SINGH\nNO:132686\nD.O.B:19-05-1990\nBATCH:2018\n\n2.NAME:VIKRAM BATRA\nNO:132687\nD.O.B:16-03-1991\nBATCH:2018\n\n3.NAME:DIGENDRA KUMAR\nNO:132688\nD.O.B:17-08-1992\nBATCH:2018\n\n");
				    break;
				    case 2:printf("1.NAME:YOGENDRA SINGH YADAV\nNO:132689\nD.O.B:29-09-1991\nBATCH:2017\n\n2.NAME:MANOJ KUMAR PANDEY\nNO:132690\nD.O.B:19-10-1992\nBATCH:2016\n\n3.NAME:SANJAY KUMAR\nNO:132691\nD.O.B:29-05-1990\nBATCH:2015\n\n");
				    break;
				    case 3:printf("1.NAME:SAURABH KALIA\nNO:132692\nD.O.B:12-05-1990\nBATCH:2016\n\n2.NAME:VIVEK GUPTA\nNO:132693\nD.O.B:19-07-1991\nBATCH:2017\n\n3.NAME:N KENGURUSE\nNO:132694\nD.O.B:15-12-1992\nBATCH:2017\n\n");
				    break;
			   }
			   break;
			   case 3:printf("1.CQMH\n\tThree Stripes and an Ashoka\n2.HAVILDAR\n\tThree Stripes\n3.NAIK\n\tTwo Stripes\n4.LANCE NAIK\n\tOne Stripe\n");
			   scanf("%d",&e);
			   switch(e)
			   {
			   	    case 1:printf("1.NAME:KEISHING CLIFFORD NONGRUM\nNO:132696\nD.O.B:01-02-1991\nBATCH:2017\n\n2.NAME:ROSHAN LAL\nNO:132697\nD.O.B:05-10-1990\nBATCH:2016\n\n3.NAME:MOHD ASHRAF MIR\nNO:132698\nD.O.B:02-05-1992\nBATCH:2018\n\n4.NAME:KAMLESH SINGH\nNO:132700\nD.O.B:02-04-1990\nBATCH:2017\n\n");
				    break;
				    case 2:printf("1.NAME:MADAN LAL CHOUDHARY\nNO:132701\nD.O.B:03-09-1994\nBATCH:2019\n\n2.NAME:RAKESH CHANDRA\nNO:132702\nD.O.B:16-11-1990\nBATCH:2017\n\n3.NAME:SHAMSHAD MOHID\nNO:132703\nD.O.B:25-10-1992\nBATCH:2018\n\n4.NAME:JORABAR SINGH\nNO:132704\nD.O.B:03-12-1990\nBATCH:2017\n\n");
				    break;
				    case 3:printf("1.NAME:VIJAY KUMAR\nNO:132705\nD.O.B:15-05-1995\nBATCH:2019\n\n2.NAME:KAPIL KUNDU\nNO:132706\nD.O.B:02-02-1992\nBATCH:2018\n\n3.NAME:PRAKASH YADAV\nNO:132707\nD.O.B:13-08-1993\nBATCH:2018\n\n4.NAME:NEELESH SINGH\nNO:132708\nD.O.B:02-11-1990\nBATCH:2017\n\n");
				    break;
			   }
		      }
		        printf("press 5 to continue");
			    scanf("%d",&ch1);
	        }while(ch1==5);
	    case 2:printf("List of guns:\n");
               printf("1.T91 Assault Riffle\n 2.AR-M1\n 3.AKM\n 4.Grenade\n 5.Pistol Auto 9mm 1A\n 6.AK 203\n 7.NSV Heavy Machine Gun\n 8.12 Bore Pag Gun\n 9.IMI Galil\n 10.Mauser SP 66");
							printf("\nEnter your choice:");
    						scanf("%d",&n);
   							  switch(n)
    						   {
							    	case 1: printf("T91 Assault Rifle:\n");
							    	        printf("Cartridge-5.56x45mm NATO\nDesign-2002\nEffective firing range-400m,600m\nRate of fire-800-850 rpm\nMuzzle velocity-975m/s\nLength-800mm");
							    	        break;
									case 2: printf("AR-M1:\n");
							    	        printf("Cartridge-5.56x45mmNATO and 7.62x39mm\nEffective Firing range-600m\nDesign-2000\nRate of fire-600-700rounds/min\nMuscle velocity-910m/s\nLength-930 mm");
							    	        break;
									case 3: printf("AKM:\n");
							    	        printf("Cartridge-7.62x39mm\nEffective Firing range-350m\nMuscle velocity-715m/s\nRate of fire-600rounds/min\nLength-880mm\nDesign-1959");
							    	        break;
									case 4: printf("HE-36M Hand Grenade:\n");
							    	        printf("Weight-490g\nLength-139mm\nDesign-1915\nDiameter-63mm\nRange-35m\nDelay Time-3.5 to 4.5 sec");
									        break;
									case 5: printf("Pistol Auto 9mm 1A:\n");
							    	        printf("Design-1973\nCartridge-9x19mm\nRate of fire-Semi automatic\nMuzzle velocity-396.23m/s\nEffective firing range-50m\nLength-205mm"); 
									        break;
									case 6: printf("AK 203:\n");
							    	        printf("Length-940mm\nCartridge-7.62x39mm\nRate of fire-700 rounds/min\nMuzzle velocity-730m/s\nEffecting firing range-400-800 m\nDesign-2007");      
								            break;
									case 7: printf("NSV Heavy Machine Gun:\n");
								            printf("Design-1971\nCartridge-12.7x108mm\nRate of fire-700-800rpm\nMuzzle velocity-845m/s\nRange-1500m\nLength-1560mm");
								            break;
								    case 8: printf("12 Bore Pag Gun:\n");
								            printf("\nCartridge-12 BDRE\nMuzzle Velocity-300m/s\nRange- 60-70m\nLength-478mm");
									     	break;
									case 9: printf("IMI GALIL (Sniper):\n");
								            printf("Design-1976\nCartridge-7.62x51mm\nRate of fire-single\nMuzzle velocity-815 m/s\nRange-300-500m\nLength-1112mm");
											break;
									case 10: printf("Mauser SP 66:\n");
								            printf("Design -1976\nCartridge -7.62x61mm\nRate of fire-Single\nMuzzle Velocity-815m/s\nRange-1000m\nLength-1120mm");       
											break;
							   	}
		case 3:printf("List of vechiles:\n");
		       printf("1.T-90S(BHISHMA)\n 2.BMP-2(SARATH)\n 3.TATA CESTREL\n 4.9P148(BRDM-2)\n 5.KALYANI M4\n");
							printf("\nEnter your choice:");
    						scanf("%d",&f);
   							  switch(f)
    						   {
							    	case 1: printf("T-90S(BHISHMA):\n");
							    	        printf("Type-Main Battle Tank\nDesigned-1992\nMass-46 tonnes\nlLength-9.63m\nHeight-2.22m\nWidth-3.78m\nCrew-3\nSpeed-60kmph\nMain armament-2246M 125mm\nsmooth boregun with 43 rounds\nSecondary armament-7.62mm machine gun");
							    	        break;
									case 2: printf("BMP-2(SARATH):\n");
							                printf("Type-Infantry Fighting Vechile\nDesigned-1980\nMass-14.3 tonnes\nlLength-6.735m\nHeight-2.45m\nWidth-3.15m\nCrew-3(+7 passengers)\nSpeed-65kmph\nMain armament-Turret with 30mm\nAuto canan 2A42\nSecondary armament-7.62mm machine gun");
							    	        break;
									case 3: printf("TATA CESTREL:\n");
							    	        printf("Type-Armoured Personnel Carriers\nDesigned-2017\nMass-24 tonnes\nlLength-7.85m\nHeight-2.3m\nWidth-3.00m\nCrew-3(+49 passengers)\nSpeed-100kmph\nMain armament-30mm auto canan\nSecondary armament-7.62mm machine gun");
							    	        break;
									case 4: printf("9P148(BRDM-2):\n");
							    	        printf("Type-Tank Destroyer\nDesigned-1962\nMass-7 tonnes\nlLength-5.72m\nHeight-2.31m\nWidth-2.37m\nCrew-4\nSpeed-100kmph\nMain armament-Heavy Machine gun with 500 rounds");
							    	        break;
									case 5: printf("KALYANI M4:\n");
							    	        printf("Type-Armoured Personnel Carrier\nDesigned-2017\nMass-46 tonnes\nlLength-5.8m\nHeight-2.45m\nWidth-2.6m\nCrew-2+2+6\nSpeed-140kmph\n");
							    	        break;
							    }
		}
	}
