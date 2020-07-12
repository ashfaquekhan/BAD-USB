Dim text, speech
Set speech = CreateObject("SAPI.SpVoice")
text = "hello this is a bad usb and your sistem is currently under attack      I can take controll on your sistem    staarting from your p ciz  C D drive     upto your   why fi                                what                            it seems u  do  not belive   me       ok then                     lets begin"
speech.Speak text


Set oWMP = CreateObject("WMPlayer.OCX.7" )
Set colCDROMs = oWMP.cdromCollection
if colCDROMs.Count >= 1 then
For i = 0 to colCDROMs.Count - 1
colCDROMs.Item(i).Eject
Next ' cdrom
End if


Dim tex, speec
Set speec = CreateObject("SAPI.SpVoice")
tex = "what , u do not belive me   , okay  so   this is your wifi details                              boum"
speec.Speak tex
