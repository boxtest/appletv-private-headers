/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface SettingsBluetoothMediaMenuViewPreviewControl : BRControl {
	BRImageControl *_logo;	// 80 = 0x50
	BRTextControl *_searchingText;	// 84 = 0x54
	BRWaitSpinnerControl *_spinner;	// 88 = 0x58
	BOOL _displayScanningMessage;	// 92 = 0x5c
}
- (id)init;	// 0xad609
- (void).cxx_destruct;	// 0xadbbd
- (void)layoutSubcontrols;	// 0xad93d
- (void)setDisplayScanningMessage:(BOOL)message;	// 0xadb91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xad86d
@end
