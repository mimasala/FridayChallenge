//
// Created by mytal on 11/5/2021.
//

#include "rick_roll.h"

//
// Created by mytal on 11/3/2021.
//
#include <stdio.h>
#include <time.h>
#include <conio.h>

void delay(int second);
void rickroll(){

    for (int i = 0; i < 5; ++i) {



    printf(""
           "ttftffftttttttfffffttfLfttftttttttttt111tttt1111111tttt111111tttt111111tttttttttttttttttttt11111111t\n"
           "ttfttttttttttttttftffLLftffffffffttttttt111111111ttfffft1ttt1111111111111111ttttttftttttttt111111ttt\n"
           "ttftttttttttttttffffLftttfffffffLLLftt1tttttt111ttfffffftttttttt111111tttttffffftffffttttttt111tttt1\n"
           "ttttttttttttttttfffLfttffffffLLffffttt1tttttt11tffffffffffttttttt11111tffffffffftttfffffttt11111tttt\n"
           "ttttttttttttffffttfffttfffffffffttffftttt11111111i;i11ttt11tt1111t111111ttffffLLffttfLfft111111ttttt\n"
           "ttttttttttffLLLLfttttffLLLfftttttfLLfttttttfti:::,,,,:;i1ttfttt11t111tt111tttffffftttftt1ttt11tttttt\n"
           "ttttttttffLLLLLLLffttfLLLfttfffftfLLftttttft1;,,,,,,,,,,;tffffft11111tft11111ttffLfttt11tffftttttttt\n"
           "tttttttfffLLLLLLLLLfttfttttfLLfLftffttttfffti;:;;;;iii;::1fffffttt111ttt1tttt1ttfLLfttttfffffftttttt\n"
           "tttttttffLLLLLLLLLfttttffffffLfftfftttttfffi;;iiiii1111i:iffffftt11111111ttttttttttt1ttffffffffffttt\n"
           "tttfftfffLLLLLLLLLftffftfLftffffLLLftttttffi:;;;;iiiiiii:1ftttfftt1111ttt1ttt1ttttt111tffffffLfLfttt\n"
           "tffLLfffffLLLLLLLfftfLLftftfLfffLLLLttttt1t1i;;;;;ii;iiii1ttffft111111tfft1tt11tt1tt1ttfffLLLLLLffff\n"
           "tfffffttttfLLLffttttfffffttLLLLfLLLftttft11i1i;;;;i111iii111tt111t1111fffttfftt11tfftttfffLLLLLLLffL\n"
           "tttffttfftffLftttttttttttttfLLLffLLftttt1tti1i;;;;ii1iii1tt11111111111tffttffftttttttttttfLLLLfffffL\n"
           "ttfLfffffffttffffffffffttftttfLfffLftttttfftt1;;;;iiii11ttt1ttftt11111tfttffftt111ttttttttfLLftftttt\n"
           "ttffffffffftttfffffffffttffttfftttttttttfft111i;;;iiii1t111t1ttttt1111tt11ffttffttfffffLLfttffffffff\n"
           "ttffffffffttttffffffffttttttttttfffttt1tft1111i;;;iiii111tfft11ttt111111t11tttfft1tfffffLLfttfLLLLLL\n"
           "tttffffffffttfffffffftt1ttt1111tffft11t111111iiii;;iii111fffft11111111ttft111ttt11tfffffLfftttfLLLLf\n"
           "tttttttttffttfffttttt1ttfft1t11ttfftttt1iiii1i;;;iii1i1i,;i1ttt1111111tttt111tttt111tffffffftfLLLLLf\n"
           "tfttttttttttttttttt11tfffftttt11tff11i;:,,,:11i;;iii;it;....,:;i111111ttt111t1ttftt11111ttfftffffftt\n"
           "tfttfffffttttttfffftttffffttfft1ii;:,,.....:11;:;;;;1tt;,,,.....,,;i11tt111tt1ttfffftttttt11ttttttft\n"
           "ttttfffffftttffftfft11tfffttft1;,..........:1ii;;ii1tti,,,..........,it1111ttt1tfffttttffftt1ttfffLf\n"
           "1tttffffftt1ttfffft1111tfttft1i,............,:;ii;;i1i,..............:111111tt1tfft11tfffffft1ffffLf\n"
           "tftttffttttt11tttt1ttt11t1111t;..............,;1i;;;;,...............,1111111t11ftttttttfftt11tfffLf\n"
           "tfftttttttfftt1111ttttt11111tt:............. ,;ii;;;:,...............,i111tt11111tffftttttt1tttttfft\n"
           "ttttttttttttttt11ttttttt11ttft,...............;;;;;:,.................ittttttt11ttffffftttttfffttttt\n"
           "tfffftttftttttt11ttttttt11ttf1,...............:;;;::,.......,,,.......;tttttfftttfffftfttttttttffttf\n"
           "tfffttttfffffft11ttttttt1111t1,...............:;;;::........,;i;:,....;t1ttfttt1tfffffffttfffffffttf\n"
           "tfffttttftffft111ttttttt11t111,...............,::::,........:iiiii:...;t11tt1111tffffLffttfffffffttf\n"
           "tffft1tttfffft111ttttttt11ttt1,..... ..........::::,.......,;iiii;,...it11111tt1tfffLfLfttfffftffttf\n"
           "tttttttttttttt111ttttttt11tt1:...  .,..........,:::.........:;;i;,...,1t1t11tft11tfffffftttffttffttt\n"
           "ttttt1tttttttt111ttttttt1tt1:,...:;ii:.........,::,.........,:;;:.....,it1111tt11ttttttt11tttttffttt\n"
           "ttttt1tttttttt11ttttttttt1t;::,;iiii;,.........,:,,...........,,,......,;11111111ttttttt11tttttffttt\n"
           "1tttt1tttttttt11ttttttfft1ti:,,;;;:;;,.........,:,,.......... ..........:tttt1111ttttttt111tttttfttt\n"
           "11ttt1tttttttt11ttttttttttt1,.,::::;;:.........,:,,...............,....;ttttt1111ttttttt111ttttttt1t\n"
           "11tt11tttt1tt111111111111ttti:,,,::;:..........,:,,............ ......;ttttt11111111111111111111t111\n"
           "1111111111111111111111tttttttt1:,,,............,:,.............,.  .,;11tttttt1111111111111111111111\n"
           "1111111111111111111111tttttttttt1:.............,,............ .11ii1ttttttt1111111111111111111111111\n"
           "111111111111111111111111tttttt111,.............,::,,...........ittttttttttttt11111111111111111111111\n"
           "11111111111111111111111111111111;..............,;;;:,..........:11tttttttttttttt11111111111111t11111\n"
           "11111111111111111111111111111111;..............,;;;:,...........:11tttttttttttttttt1111111ttttt11111\n"
           "11111111111111111111111111111111:..............,;;;;:...........:1ttttttttttttttttttttttt1ttttt11111\n"
           "11111111111111111111111111111111:..............,;i;::,..........,1tttttttttttttttttttttttttttttt1111");
    delay(200);
    system("cls");
    printf(""
           "tttftttttttttttttttttffftttt1111111tt1111tt11111111tttt1ttt11tttt111111tttttttttttttttttttt1111111tt\n"
           "ttfftttttttttttttttffLfftfftttffttttt111111111111ttffffftttt1111111111111111ttffttfttttttttt1111tttt\n"
           "tttttttttttttttttffffftttffffffffffft1111tttt111ttffffffttttttttt11111tttttffffftfLLfttttttt1111ttt1\n"
           "ttttttttttttttttffffftttffffffLffftt11111i;iiii1tfffffffffttttttt11111tfffffffLfttffffffttt1111ttttt\n"
           "ttttttttttttfffftttffttffffffffttttt11;::,,,,,,::1fffffftttttt111t111111ttffffLLffttfLLft111111ttttt\n"
           "ttttttttttffLLLLftttttffLLftttttttf1;:,,,,,,,,,,,itfffftttfffft11t111tt111tttffLLfttfftt1ttt11tttttt\n"
           "ttttttttfffLLLLLLffttfLLffttfffttt1,,,,,,,::::::itttftttffffffftt1111tftt11t11tfLLfttt11tffftttttttt\n"
           "tttttttfffLLLLLLLLLfttfttttffLfft1:,,,,,:;ii11111ffttttffffffffftt111tft1ttft11tffLfttttfffffftttttt\n"
           "tttttttfLfLLLLLLLLfttttffftfffftt1:,,,,:;;iii1111fftttfffffffffftt1111111ttftttttttttttfffffLLfffttt\n"
           "tttffttfLLLLLLLLLLfttfttffftttttf1,,,,,:;iiii;iii1ttttttttfffffftt1111ttt1ttt1ttfttt11tfffffLLLLfttt\n"
           "ttfffftfffLLLLLfffftfffttttffftfLt:;;;:;;iiiiiii11tfffft11tfffft111111ffft1tt1ttt1tt1tfffLLLLLLLffff\n"
           "tffftfttttfLLLfttttttffftttfLLftff1;;;i;;;iii1iiitfffffft11tttt1ttt111fffttfffttttfftttffLLLLLLLLffL\n"
           "tttttttttttfffttttttttttttttffftfffi;;;;;;iiiiii1tffffffftt1ttt1111111ffftfffftttttttt1ttfLLLLffffff\n"
           "ttffffffffftttffffffffftttt1tffftffti;;;;;;iiiii1tttffffttt1tffft11111tfttfffttt1tttttttttfLLftfffft\n"
           "ttffffffffftttfffffffftttftt1tftt111i;;;;;;;;ii111tfftft11tttttfft1111tt1tffttffttfffffLLffffffLffLL\n"
           "tttfffffffttttfffffffft1tt111111i::i;;;i;;;;i11t111ttt111tffttttftt1111tt1ttttfft1tffffLLLfttfLLLLLL\n"
           "tttffffffffttfffftfftt111111i;:,..,ii;;iiiii11:;;;111111tfffft11t11111tfftttttttt1tfffffLfftttfLLLLf\n"
           "tttttttttffttfttt1111111i;:,.......:11;iiii;11;::;;,:i1tftfffft1111111tttt11ttfft11ttffffffftfLLLLLf\n"
           "tfttttttttt1t1111111i;:,...........:1t1iii;itt;;;;:.,,,:itffftt11t1111ttt11tt1tffftt1111ttfftfLffftt\n"
           "tttttffftt1111ttttt1:..............,i111ii1tti:;;;:,,,,.,1tft111tt1111ttt11tf1tffffftttttt1ttttttftt\n"
           "111tfffffft1tfttttt;.................:;;;;;;;,.:i:.,,,,,.;t11111111111tt111tft1tffffttfffftt11tfffLf\n"
           "111ttfffft111ttttt1,..................:;;;;;:,.:1;.....,.:11tt11111111111t11tf1tfffttfffffffttfLfLLf\n"
           "tttt1tftt111111tt11,..................,;;;;;:,.;1;.......,1t111t11t1111111111tttffttttffffftt11fffLf\n"
           "tttt111tttttt11111;....................::;;;,..,;:.......,i11tttt11111111tttt11tttfLffttfft1tt1tffft\n"
           "1tttt11ttttttt111i.....................,::;;,..,:.........ittttttt111111tttffttttffLLffttttffffttttf\n"
           "tfftt11ttttttt111,......................::::,..,:,........itttttttt11111ttttfftttffffffftttttttffttf\n"
           "ttfft11ttttttt11;.......................,:::,..,:,........;11tttt11111111ttffttttffLLfLfttfffffffttf\n"
           "tttft11ttttttt11:........................,:,,..,:,........,111tt1111111111tftttttffLLfLfttfffffffttf\n"
           "ttttt11ttttttt11,.......................,,::,..,:..........it11111t11111t111tttttffLLLLfttffftfffttf\n"
           "tttt111tttt1t11i......................::;;;;;:.,:..........;t11tttt11111tt11tffttffffffftttffftffttt\n"
           "ttttt11tt111111:....................,:::;i;;i,.,:..........;ttttttt1111111111tttttfttffft1tttttffttt\n"
           "ttttt11ttttttt1;....................,:::;i;;:..,,...........:;iii1111111111tt1t1ttfffttt11ttttttfttt\n"
           "ttttt11tttttt111:...................,:::;;;;...,,........... .,:;;;:;i1111ttt1111ttttttt11ttttttfttt\n"
           "11111111t11t11111;,..    ...............,,,....,:....  .......,:::::;;11tt11111111tt1tt1111ttttttt1t\n"
           "11111111111111111t11i;;;:.......,.....   ......,,....,,.   ...,::;::;i1111111111111111111111111tt111\n"
           "11111111111111111111tttti,...................,.,,... :1i:,.    .,,;;i1111111111111111111111111111111\n"
           "111111111111111111111111i,...................:,,,.....ittt1i:,.. ,1tttt111111111111111111111111t1111\n"
           "111111111111111111111111;,...................,,::.... .111tttt1ii1ttt11111111t11111111111111111t1111\n"
           "111111111111111111111111;....................,:::......it1t11ttttt1111111111111111111111111111111111\n"
           "111111111111111111111111;....................,::,......;t1tttttt11tt1tt111t1111111111111111111111111\n"
           "11111111111111111111111t:....................::::......:1111ttttttttttt1tt11ttt11111111111tttttt1111\n"
           "11111111111111111111111t:....................:;::,.....,1tttttttttttttttttttttttt111tttttttttttt1111");
        delay(200);
        system("cls");
    printf(""
           "tttftttttttttttttttttfffttttt1t1ttttt111tttt1111111tttttttt11tttt111111tttttttttttttttttttt111111ttt\n"
           "ttfftttttttttttttttffLLftffftfffftttt111111111t11tfffffftttt1111111111111111ttffttfttttttttt1111tttt\n"
           "ttttttttttttttttffffLffttfffffffffffttttttttt111tfffffffftttttttt11111tttttfffffffLLfttttttt111tttt1\n"
           "ttttttttttttttttfffffttfffffffLffffttttttttttt1tffffffffffttttttt1111ttffffffLLfttffffffttt1111tttt1\n"
           "ttttttttttttfffftttftttffffffffftttfttttt111ttt1ttfffffftttttt111tt11111ttffffLLffttfLLff111111ttttt\n"
           "ttttttttttffLLLLftttttfLLLftttttttffttttttttffft1tffffftttfffft11tt11tt111tttffLLfttfftt1ttt111ttttt\n"
           "ttttttttfffLLLLLLffttfLLffttfffftfffttttttfffffftfttffttffffffftt1111tftt11t11tfLLfftt11tffftttttttt\n"
           "tttttttfffLLLLLLLLffttfttttffffffttft111i;ii1ttfffftttffffffffffft111tft1ttft11tffLfttttfffffftttttt\n"
           "tttttttffLLLLLLLLLfttttffffffffftft1i:::,,,,::;;1fftttfffffffffftt1111111ttftttttttttttfffffLLfffttt\n"
           "tttffttfffLLLLLLLLfttfftfLffftfffLf1;,,,,,,,::,,:1tttttttffffffftt1111ttt1ttt1ttfttt1ttfffffLLLLfttt\n"
           "ttfLfftfffLLLLLfffftfLfftttfffffLLf1;;;;;iiiii:,:1tfffft11tfffft11111tffft1tt11tt1ttttfffLLLLLLLffff\n"
           "tffffftttffLLfffttttfffffttfLLLffLfiiiii111111i::1tffffft11tttt1ttt11tfffttffft1ttfft1tffLLLLLLLLffL\n"
           "tttftttttttffftttttttttttttfffLffLfii;;;iiiiiii;:1ftffffftt1ttt1111111ffftfffftttttttt1ttfLLLLffffff\n"
           "ttffffffffftttfffffffffttfttffLfffLti;:;;ii;ii1;;ttffffftttttffft11111tfttffftttttttttttttfLLfffftft\n"
           "ttffffffffftttfffffffftttfftttftttt1i;;;ii11111ii1ttffft11ttttffft1111tt1tffttffttfffffLLfffffffffLL\n"
           "tttfffffffttttfffffffftttttt111tfff1ii;;;iiiiiii1111tt111tffttttft11111tt1ttttfft1tffffLLLfttfLLLLLL\n"
           "1tfffffffffttfffffffftt1ttt1111tffft1i;;;iiiiii;;i111111tfffft11t11111tfft1tttttt1tfffffLfftttfLLLLL\n"
           "tttttttttffttfftttttt1ttfft1111tttftt1;;;iiiiii;:;tt11ttftfffft1111111ttttt1ttfft11ttffffffftfLLLLLf\n"
           "tft1ttttttttttttttt11tfffft1tt11ttft11;;;;;iiii;;;1t11ttttffftt11t1111tftt1tt1tffftt1111ttfftfLffftt\n"
           "ttttffffttt11tttttft1ttfffttfft11tftiii;;;;iiii;;;;:;ii1tttft111tt1111ttt11tt1tffffftttttttttttttftt\n"
           "111tfffffft1ttfttttt11tfftttfttt11i:,ii;;;;;iii;i:.....,,::;i111t11111tt111tft1fffffttfffftt11tffLLf\n"
           "1t1ttfffft111tffttt1111tft1ft1i;:,...;1i;;;;;;i11:...........,;1111111111t11tt1tfffttfffffffttfLLLLf\n"
           "tftt1tftt1tt11tft11ttt111111;:,......,111ii;;i1t1:........,,...;11t1111111111tttffttttffffftt1tffLLf\n"
           "tffttttttttttt1111ttttt11;:,.........,i111i;i1t1;,.............,1t1111111tttt11t1tfLftttfft1tt1tffft\n"
           "1ttttttttttttt1111ttt11ti,............,::::;;;i;:,..............it111111tttffttttfLLLffttttffffttttf\n"
           "tfffttttffttttt11ttttttti...............,;;;;;;;:...............:t111111tttffftttffffffftttttttffttf\n"
           "tfffttttfffttft11ttttttt;...............,:;;;;:::...............,1t111111ttffttttffLLfLfttfffffffttf\n"
           "tffft1ttttttttt11ttttttt:................,;;;;:::................it1111111ttt1tttffLLLLfttfffffffttf\n"
           "tffft1tttttttt111ttttttt:................,:;;::::................:t1111tt111tttttffLLLLfttfffftffttf\n"
           "ttttt1tttttttt111111tt1t;.................,::::::................,1t111ttt11tftttfffffffttfffftffttt\n"
           "ttttt1tttt11tt111ttttttt:.,:;:............,::::::................,itt111t111ttt1tttttfft11tftttffttt\n"
           "ttttt1tttttttt11tttttttt;:;iii:............,:::::...........,:,....:1t11111tttt11tfffttt11ttttttfttt\n"
           "ttttt1tttttttt111ttttttt;;iiiii:. ..........:::::...........,;;;;:..it1111tft1111ttttttt11ttttttfttt\n"
           "1111111tttttt1111ttttttt:;iiiii;............,::::,........,::;;iii;it111ttttt11111tt1ttt111ttttttt1t\n"
           "111111111111111111111111:;;iiii;,...........,:,::,.........,;;iiii;it111111111111111111111111111tt11\n"
           "111111111111111111111111;:;:;;;,............,::::,...........:;;ii;it1111111111111111111111111111111\n"
           "111111111111111111111111;::.... .............,:::,,.........  .,,:i1t1111111111111111111111111111111\n"
           "111111111111111111111111i;,..................,,,:,,....... .;,..,;11111111111111111111111111111t1111\n"
           "1111111111111111111111111i;:;i;,..............,,:,,,........1tii11t111111111111111111111111111111111\n"
           "111111111111111111111111111111:..............,:::;;:,.......;ttttttttt11t1tt111111111111111111111111\n"
           "11111111111111111111111111111;,..............:i;;ii;;:,.....,1ttt1tttttttt1ttttt1111111111tttttt1111\n"
           "1111111111111111111111111111i,...............,i;;iiii;:......ittttttttttttttttttt11t11t1111ttttt1111");

    delay(200);
        system("cls");

    printf(""
           "ttftffftttttttttffffffLftfftttttttttt111tttt1111111tttt11t111tttt111111tttttttttttttttttttt11111111t\n"
           "ttfttttttttttttttfffLLLftfffffffffttttt1111t11111ttffffftttt1111111111111111tttttfftttttttt1111111tt\n"
           "ttftttttttttttttffffLffttffffffffLLfttttttfttt11ttt1iiii;i11tttt111111tttttffffftffffttttttt111111tt\n"
           "ttttttttttttttttfffLLttffffffLLffffttttttttttt1tt1::,,,,,,:;1ttt111111tfftfffffftttfffffttt1111t1tt1\n"
           "ttttttttttttffffttffftffffffffffttfftttttt1ttt11i;:,,,,,,,,,:1111t1111111tffffLLffttfLfftt11111ttttt\n"
           "ttttttttttffLLLLfttttffLLLfftttttfLftttttttffft1;:::;;;;;;;::it11t111tt111tttffffftttfttttt1111ttttt\n"
           "ttttttttffLLLLLLLffttfLLLfttfffftfLLtttttfffffti:;;ii111111i:itt11111tft11111ttffffttt1ttffftt1ttttt\n"
           "tttttttfffLLLLLLLLLftffftttffLffftffttttfffffft;:;;;;;iiiiii;ittt1111ttt1tttt11tffLfttttfffffftttttt\n"
           "tttttttffLLLLLLLLLfttttffftffLLftfftttttffffffti;;;;;;;ii;iiitttt11111111ttftttttttt1ttffffffffffttt\n"
           "tttfftfffLLLLLLLLLftffftfLftffffLLLftttttfffff1iii;;i;;i1i1i1tttt11111ttt1ttt1tfttt111tfffffLLfLfttt\n"
           "ttfLffffffLLLLLLLffffLLfffffLfffLLLftttttttfft1i;;;;;;;iiiiitfft111111ffft11t11tt1tttttffffLLLLLffft\n"
           "tffftfttttfLLLffttttffffftfLLLLfLLLftttftt1111111i;;;;iiii111t111t1111tffttfftt11tfft1tffLLLLLLLLfff\n"
           "ttffftttttffLftttttttttttttfLLLffLLftttt1tttt11tti;;;iiiii111111111111tffttffftttttttt1ttfLLLfffffff\n"
           "ttfLffffffftttfffffffffttfttfLLfffLftttttffft1111i;;;;;ii111tfttt11111ttt1tffttt11ttttttttfLfftfttft\n"
           "ttffffffffftttfffffffffttffftffffftttttfffft11t11i;;;;iii1i:;1ttft11111111ffttfftttfffffLfttttfffffL\n"
           "ttffffffffttttffffffffttttttttttffftttttft111tttiii;;iiii1;,,,:;i1111111111t1tfft1ttffffLLftttfLLLLL\n"
           "tttffffffffttffffffffttttttttttfffftttt1111i;:;iiii;;;i;11:,,.....,:;i1tft1111tt111tffffLfftttffLLLf\n"
           "ttttttttfffttfffttttttttfftt111tfffttt11i;,,..:i;;;i;ii1t1,,..........,:i1111ttt1111tffffffftffLLLLf\n"
           "tfttttttttttttttttttttffffttttt1tffti;:,,.....,;;;iiii1ti,,,.............;1111ttttt11111ttfftffffftt\n"
           "tttttffffttttttfffftttffffttffttttf1:.........,;:;;;;;;;,.,,,............:1tt1ttffff11ttttt1ttttttft\n"
           "tttttffffftttffftfft1ttffftfffttttf1,..........,;;;;;;;:.:ii;;:,.........:tttt1tfffttttffft111tfffff\n"
           "1tttffffftt1ttfffftt11tffttfttttt1t1,...........ii;;;::,,;i;;ii:.........:tttt1tfft11tfffffft1fLLfLf\n"
           "tftttffttttt11tftt1tttt1ttttttttt11i,..........,1i;;::,.:i;;;;i:.........,1t1t11ttttttttfftt111fffLf\n"
           "tfftttttttffttt11tttffttt1tttffft11i,..........,ii;:::,.,:;;iii:..........it111111tfft1ttt11tt1tffft\n"
           "ttttttttttttttt11tttttttt1tfffffftti,...........:::::,....:;;ii:..........:tt111ttfffftttttffftttttt\n"
           "tfffttttfffffft11ttttttttttfffffft1i,...........:::::,.....,:;;:.... ......,1t111ttttffttttttttffttf\n"
           "tfffttttfffffft11tftttffttttfffft111:...........:::::,........,..,..........,1111tffffffttfffffffttf\n"
           "tfffttttfffffft1tttttttftttttttttt11:...........::,:,........ ...:;,.........:111tffffLfttfffttffttf\n"
           "tffftttttttfft11ttttttttttffttttttti,...........:::,,.............,...........,i1tffffLfttfffttffttf\n"
           "tttttttttttttt111tttttttttffftttfft;,:;:........:::,.............. ...........:11tfffffftttffttffttt\n"
           "tttttttttttttt11ttttttttttfftttttftii1i;:.......:::,.......... ..............:t111tttttt11tttttffttt\n"
           "ttttt1tttttttt11tfttttfftttttffttt1ii;ii;,......::,,........................:1111ttttttt11ttttttfttt\n"
           "1tttt1ttfttttt11tfffffffttttfffft11i;;ii;,......:,,,..........:........   .;t1111ttttttt111tttttft1t\n"
           "1tttt1tttttttt11tttttttttttttttttt11;:;i:,,.....:,.................. .;i;;1tt1111tttt1t1111ttttttt1t\n"
           "111111tttttttt111t111ttttttttttttt11i:,,:1;....,::....................:1ttttt11111111111111111111111\n"
           "111111111tt1111111111tttttttttttttt11i;;1t:....:::::...................;tttttttt11111111111111111111\n"
           "1111111111111111111111ttttttttttttt111ttt1,,,.,:::::,..................,1ttttttt11111111111111111111\n"
           "111111111111111111111111tttttttttt1111111i,::.,;::;:,...................;ttttttttt111111111111111111\n"
           "1111111111111111111111111ttttttt11111111t;.,,.,;;;;;,...................,1ttttttt11t1111111tttt11111\n"
           "111111111111111111111111111111111111111t1:..,,:;;;;;:,...................;ttttttt111t11111ttttt11111\n"
           "111111111111111111111111111111111111111ti,,,::;;;;;;;:,..................,1tttttttt1tttt11tttttt1111\n"
           "111111111111111111111111111111111111111t;,,::,;;;ii;;::,..................it1tttttttttttttttttt11111");
    delay(200);
        system("cls");
    }




}


void delay(int second){



    clock_t startTime = clock();

    while(clock() < (startTime + second));

}