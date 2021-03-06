/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRCursorControl, BRHeaderControl, BRImageControl, BRImage, BRDotArrayControl;

@interface BRPageStripView : BRControl {
@private
	id _dataSource;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	BRHeaderControl *_headerControl;	// 56 = 0x38
	BRCursorControl *_cursor;	// 60 = 0x3c
	BRDotArrayControl *_dotControl;	// 64 = 0x40
	BRImageControl *_overlayImageControl;	// 68 = 0x44
	BRControl *_descControl;	// 72 = 0x48
	int _selectedIndex;	// 76 = 0x4c
	BRControl *_prevPrevControl;	// 80 = 0x50
	BRControl *_prevControl;	// 84 = 0x54
	BRControl *_selectedControl;	// 88 = 0x58
	BRControl *_nextControl;	// 92 = 0x5c
	BRControl *_nextNextControl;	// 96 = 0x60
}
@property(assign, nonatomic) id dataSource;	// G=0x3026e6f1; S=0x3026e009; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x3026e701; S=0x3026e711; @synthesize=_delegate
@property(readonly, assign, nonatomic) BRDotArrayControl *dotControl;	// G=0x3026e741; @synthesize=_dotControl
@property(retain, nonatomic) BRImage *headerImage;	// G=0x3026e111; S=0x3026e0a9; 
@property(retain, nonatomic) BRImage *overlayImage;	// G=0x3026e049; S=0x3026e029; 
@property(assign, nonatomic) int selectedIndex;	// G=0x3026e721; S=0x3026e731; @synthesize=_selectedIndex
@property(copy, nonatomic) NSString *title;	// G=0x3026e089; S=0x3026e069; 
+ (id)pageStripView;	// 0x3026dd99
- (id)init;	// 0x3026ddd1
- (BOOL)_loadLeft;	// 0x3026edc9
- (BOOL)_loadRight;	// 0x3026f3c1
- (CGPoint)_nextNextPos;	// 0x3026fd11
- (CGPoint)_nextPos;	// 0x3026fc75
- (CGPoint)_prevPos;	// 0x3026fb61
- (CGPoint)_prevPrevPos;	// 0x3026fabd
- (void)_removeNextNext:(id)next;	// 0x3026fdb1
- (void)_removePrevPrev:(id)prev;	// 0x3026fdf1
- (CGPoint)_selectedPos;	// 0x3026fbfd
- (void)_setPagesTargetBounds;	// 0x3026e751
- (float)_xPosOffset;	// 0x3026f9c1
- (float)_yPosOffset;	// 0x3026fa65
- (BOOL)brEventAction:(id)action;	// 0x3026e1e5
// declared property getter: - (id)dataSource;	// 0x3026e6f1
- (void)dealloc;	// 0x3026df09
// declared property getter: - (id)delegate;	// 0x3026e701
// declared property getter: - (id)dotControl;	// 0x3026e741
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3026e131
// declared property getter: - (id)headerImage;	// 0x3026e111
- (void)layoutSubcontrols;	// 0x3026e5d9
// declared property getter: - (id)overlayImage;	// 0x3026e049
- (void)reload;	// 0x3026e31d
// declared property getter: - (int)selectedIndex;	// 0x3026e721
// declared property setter: - (void)setDataSource:(id)source;	// 0x3026e009
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3026e711
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x3026e0a9
// declared property setter: - (void)setOverlayImage:(id)image;	// 0x3026e029
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x3026e731
// declared property setter: - (void)setTitle:(id)title;	// 0x3026e069
// declared property getter: - (id)title;	// 0x3026e089
@end

