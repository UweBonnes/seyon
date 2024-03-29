"*.title: Seyon Command Center",
"*.iconName: Seyon",
"*input: on",
"*allowShellResize: on",
"*highlightThickness: 2",
"*font: fixed",
"*Cursor: hand2",
"*ShapeStyle: rectangle",
"*Command.top: ChainBottom",
"*Command.bottom: ChainBottom",
"*Command.left: ChainLeft",
"*Command.right: ChainLeft",
"*Command.justify: center",
"*Label*shadowWidth: 2",
"*Radio*Toggle.Translations: #replace \\n\
	<EnterWindow>: highlight(Always) \\n\
	<LeaveWindow>: unhighlight() \\n\
	<Btn1Down>: set() notify()",
"*Toggle.justify: center",
"*XfwfMultiList.shadeSurplus: off",
"*XfwfMultiList.defaultColumns: 1",
"*XfwfMultiList.verticaList: true",
"*XfwfMultiList.maxSelectable: 100",
"*XfwfMultiList.Translations: #replcae \\n\
	<Btn1Down>(2): Select() Notify() \\n\
	<Btn1Down>: Toggle() \\n\
	<Btn2Down>: Select() Notify() \\n\
	<Btn3Down>: Toggle() \\n\
	Button3 <Btn3Motion>: Extend()",
"*Text*top: ChainTop",
"*Text*bottom: ChainBottom",
"*Text*left: ChainLeft",
"*Text*right: ChainRight",
"*Box.orientation: vertical",
"*Box.borderWidth: 0",
"*Box.resizable: on",
"*Dialog.value.Translations: #override \\n\
	 <Key>Return: GetValueByPopupOK()",
"*Form.borderWidth: 0",
"*Paned*internalBorderWidth: 0",
"*Paned.orientation: vertical",
"*Paned*allowResize: on",
"*Paned*resizeToPreferred: on",
"*Paned*showGrip: off",
"*Viewport.allowVert: on",
"*Viewport.forceBars: on",
"*Viewport.useRight: on",
"*ok.label: OK",
"*cancel.label: Cancel",
"*done.label: Done",
"*dismiss.label: Close",
"*yes.label: Yes",
"*no.label: No",
"*edit.label: Edit",
"*save.label: Save",
"*reread.label: Reread",
"*uBox.width: 120",
"*Radio.width: 120",
"*Viewport*list.font: 6x13",
"*menuBox.orientation: vertical",
"*menuBox.width: 270",
"*menuBox.Command.width: 60",
"*about.label: About",
"*about.title: About Seyon",
"*about*Label.justify: center",
"*about*caption.label: Author after an unsuccessful\\n\\debugging session :-)",
"*about*caption.borderWidth: 0",
"*help.label: Help",
"*help*title: Manual, Help, and FAQ",
"*set*uBox.width: 270",
"*set*uBox.Command.width: 70",
"*set*uBox.Toggle.width: 70",
"*set.label: Set",
"*set*title: Settings",
"*set*stripHighBit.label: Strip 8th",
"*set*del.label: BS->DEL",
"*set*meta_tr.label: Meta->ESC",
"*set*xoff.label: XON/XOFF",
"*set*rtscts.label: CTS/RTS",
"*set*autozm.label: AutoZmodem",
"*set*idle.label: IdleGuard",
"*set*bits.label: Bits",
"*set*parity.label: Parity",
"*set*parity*none.label: None",
"*set*parity*odd.label: Odd",
"*set*parity*even.label: Even",
"*set*stopBits.label: Stop Bits",
"*set*cut.label: Common",
"*set*cut*8n1.label: 8-N-1",
"*set*cut*7e1.label: 7-E-1",
"*set*cut*other.label: Other",
"*set*cut*other.sensitive: off",
"*set*nl_tr.label: Newline",
"*set*nl_tr.title: Mode?",
"*set*nl_tr*nl.label: NL->NL",
"*set*nl_tr*cr.label: NL->CR",
"*set*nl_tr*cr_lf.label: NL->CR/LF",
"*set*Dialog.value:",
"*set*baud.label: Baud",
"*set*baud*dialog.label: Baud Rate:",
"*set*port.label: Port",
"*set*port*dialog.label: Modem Port:",
"*set*set_value.title: Value?",
"*set*set_value*Dialog.value.Translations: #override \\n\
	 <Key>Return: SetValOk()",
"*dial.label: Dial",
"*directory.title: Dialing Directory",
"*directory.iconName: Dial Dir",
"*directory*lBox.ok.label: Go",
"*directory*lBox.manual.label: Manual",
"*directory*lBox.clear.label: Clear",
"*directory*lBox.default.label: Default",
"*manual_dial*title: Manual Dial",
"*manual_dial*dialog.label: Number:",
"*manual_dial*dialog.value:",
"*manual_dial*dialog.value.Translations: #override \\n\
	 <Key>Return: ManualDialOk()",
"*transfer.label: Transfer",
"*transfer.title: File Transfer",
"*transfer*lBox.ok.label: Go",
"*transfer*upload*title: File?",
"*transfer*upload*dialog.label: File Name:",
"*transfer*upload*dialog.value:",
"*transfer*upload*dialog.value.Translations: #override \\n\
	 <Key>Return: UploadOk()",
"*shellCommand.label: Shell",
"*shellCommand.title: Shell",
"*shellCommand*dialog.label: Shell Command:",
"*misc*uBox.width: 185",
"*misc*uBox.Command.width: 60",
"*misc*uBox.Toggle.width: 60",
"*misc*lBox.fromVert: uBox",
"*misc.label: Misc",
"*misc.title: Misc.",
"*misc*break.label: Break",
"*misc*refresh.label: Refresh",
"*misc*suspend.label: Suspend",
"*misc*capture.label: Capture",
"*misc*divert.label: Divert",
"*misc*script.label: Script",
"*misc*editFile.label: Edit",
"*misc*displayFile.label: View",
"*divert_name*title: Divert",
"*divert_name*dialog.label: File Name: ",
"*divert_name*dialog.value: ",
"*divert_name*dialog.value.Translations: #override \\n\
	 <Key>Return: DivertOk()",
"*dialogScriptName*title: Script",
"*dialogScriptName*dialog.label: Script Name: ",
"*dialogEditFile.title: File Edit",
"*dialogDisplayFile.title: File View",
"*dialogEditFile*dialog.label: File Name:",
"*dialogDisplayFile*dialog.label: File Name:",
"*hangup.label: Hangup",
"*hangup.title: Hangup",
"*hangup*dialog.label: Sure?",
"*exit.label: Exit",
"*exit.title: Exit",
"*exit*dialog.label: Hangup First?",
"*kill.label: Cancel",
"*kill.sensitive: off",
"*edit*title: File Edit",
"*edit*Text.width: 480",
"*edit*Text.height: 300",
"*edit*Text*font: 6x10",
"*edit*Text.scrollHorizontal: whenNeeded",
"*edit*Text.scrollVertical: whenNeeded",
"*edit*save.fromVert: text",
"*edit*dismiss.fromVert: text",
"*edit*dismiss.fromHoriz: save",
"*display*title: File View",
"*display*Text.width: 480",
"*display*Text.height: 300",
"*display*Text*font: 6x10",
"*display*Text.scrollHorizontal: whenNeeded",
"*display*Text.scrollVertical: whenNeeded",
"*display*dismiss.fromVert: text",
"*messageBox.message.resizable: on",
"*messageBox.message.horizDistance: 4",
"*messageBox*top: ChainTop",
"*messageBox*bottom: ChainTop",
"*messageBox*left: ChainLeft",
"*messageBox*right: ChainRight",
"*messageBox.message.justify: center",
"*messageBox.message.label: Welcome to Seyon",
"*statusBox*font: 6x10",
"*statusBox.Toggle.Translations: #replace",
"*statusBox.Toggle.state: off",
"*statusBox.dcd.label: 00:00",
"*statusBox.dtr.label: DTR",
"*statusBox.dsr.label: DSR",
"*statusBox.rts.label: RTS",
"*statusBox.cts.label: CTS",
"*statusBox.rng.label: RNG",
"*quickKeyBox.Command.font: 6x10",
"*quickKey1.visible: on",
"*quickKey2.visible: on",
"*quickKey3.visible: on",
"*quickKey4.visible: on",
"*quickKey5.visible: on",
"*quickKey1.label: Athena",
"*quickKey2.label: Ch1",
"*quickKey3.label: UpMail",
"*quickKey4.label: DivMsg",
"*quickKey5.label: Local",
"*funMessages: \
	\"Hi there! Helloooooooooo!\" \
	\"Hugged your computer today?\" \
	\"Read the manual page and FAQ!\" \
	\"Are you talking to me?\" \
	\"Have better colors? contribute!\" \
	\"Don't you hate these messages?\" \
	\"Hello, is someone here?\" \
	\"Hey you. Yes, you!\" \
	\"I'm rated PG-34!!\" \
	\"You can get it from sipb.mit.edu\" \
	\"In stereo (where available)\" \
	\"Have something funny? send it!\" \
	\"I've fallen and I can't get up!\"",
"*notImplemented*title: Seyon Feature",
"*notImplemented.dialog.label: \
This feature is not yet implemented\\n\
Maybe in the future",
"*initError.title: Initialization Error",
"*fatalError.title: Fatal Error",
"*error.title: Error",
"*errTtyAccess.label: >> Unable to open the local terminal\\n\\n\
Possible cause:\\n\
* insufficient permission\\n\\n\
Suggested action:\\n\
* check that the correct permission\\n\
  is set for your system's tty/pty\\n\
  pairs (e.g. /dev/ttyp?, /dev/ptyp?)",
"*errModemInit.label: >> Modem initialization routine failed\\n\\n\
Possible causes:\\n\
* no modem device is specified\\n\
* modem device is locked\\n\
* failure to open modem device\\n\
  (e.g. non-existent port,\\n\
  insufficient permission, ..etc)\\n\\n\
Suggested action:\\n\
* check that you specified the correct\\n\
  port\\n\
* check that no other process is using\\n\
  the modem",
"*errSwitches.label: >> Unrecognized command-line switch\\n\\n\
Possible causes:\\n\
* erraneous command-line switch\\n\
  (e.g. spelling mistake, ..etc)\\n\
* incomplete command-line switch\\n\
  (i.e. missinig second part)\\n\\n\
Usage:\\n\
  seyon [-option ...] \\n\
    [-toolkit_option...]\\n\
    [-- [-emulator_option ...]]\\n\
  valid options are:\\n\
    -modems <device-list>\\n\
    -emulator <terminal-emulator>\\n\
    --, -nodefargs, -noemulator\\n\
    -script <script file>\\n\
    -entries <entries list>\\n\
    -dial, -nodial",
"*errFatalSig.label: >> Program received a fatal signal\\n\\n\
Possible causes:\\n\
* mis-installed app-defaults file\\n\
  (e.g. from an older version)\\n\
* bug in the program\\n\\n\
Suggested action:\\n\
* debug the program\\n\
* fill-in and mail the bug report",
"*errFileAccess.label: >> Unable to open the given file\\n\\n\
Possible causes:\\n\
* wrong file name or path\\n\
* non-existent file\\n\
* insufficient permission\\n\\n\
Suggested action:\\n\
* make sure the file exists and\\n\
  has the correct permissions",
"*errModemControl.label: >> Unable to obtain modem status\\n\\n\
Seyon will disable the status\\n\
toggles for this device from now\\n\
on and refrain from polling this\\n\
device for its status\\n\\n\
Possible causes:\\n\
* feature unsupported by your\\n\
  system\\n\
* bug in your systems's modem\\n\
  driver\\n\\n\
Suggested action:\\n\
* recompile Seyon with the flag\\n\
  HAVE_MODEM_CONTROL\\n\
  set to NO",
"*errReadError.label: >> Unable to read from the modem or tty\\n\\n\
A read error has occured. Seyon\\n\
will disable the terminal process.\\n\
You can restart it by clicking\\n\
\"Refresh\" from the Misc window.\\n\\n\
Possible causes:\\n\
* modem does not exist on that\\n\
  port\\n\
* modem not recognized by your\\n\
  system\\n\\n\
Suggested action:\\n\
* try restarting the terminal\\n\
  process\\n\
* check that you specified the\\n\
  correct port to Seyon",
