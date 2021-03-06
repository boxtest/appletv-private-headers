/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRDotArrayControl, NSString, BRCursorControl, BRHeaderControl, BRImageControl;

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
@property(assign, nonatomic) id dataSource;	// G=0x33a65c05; S=0x33a6551d; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x33a65c15; S=0x33a65c25; @synthesize=_delegate
@property(readonly, assign, nonatomic) BRDotArrayControl *dotControl;	// G=0x33a65c55; @synthesize=_dotControl
@property(retain, nonatomic) BRImage *headerImage;	// G=0x33a65625; S=0x33a655bd; 
@property(retain, nonatomic) BRImage *overlayImage;	// G=0x33a6555d; S=0x33a6553d; 
@property(assign, nonatomic) int selectedIndex;	// G=0x33a65c35; S=0x33a65c45; @synthesize=_selectedIndex
@property(copy, nonatomic) NSString *title;	// G=0x33a6559d; S=0x33a6557d; 
+ (id)pageStripView;	// 0x33a652ad
- (id)init;	// 0x33a652e5
- (BOOL)_loadLeft;	// 0x33a660c9
- (BOOL)_loadRight;	// 0x33a666c1
- (CGPoint)_nextNextPos;	// 0x33a67011
- (CGPoint)_nextPos;	// 0x33a66f75
- (CGPoint)_prevPos;	// 0x33a66e61
- (CGPoint)_prevPrevPos;	// 0x33a66dbd
- (void)_removeNextNext:(id)next;	// 0x33a670b1
- (void)_removePrevPrev:(id)prev;	// 0x33a670f1
- (CGPoint)_selectedPos;	// 0x33a66efd
- (void)_setPagesTargetBounds;	// 0x33a65c65
- (float)_xPosOffset;	// 0x33a66cc1
- (float)_yPosOffset;	// 0x33a66d65
- (BOOL)brEventAction:(id)action;	// 0x33a656f9
// declared property getter: - (id)dataSource;	// 0x33a65c05
- (void)dealloc;	// 0x33a6541d
// declared property getter: - (id)delegate;	// 0x33a65c15
// declared property getter: - (id)dotControl;	// 0x33a65c55
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x33a65645
// declared property getter: - (id)headerImage;	// 0x33a65625
- (void)layoutSubcontrols;	// 0x33a65aed
// declared property getter: - (id)overlayImage;	// 0x33a6555d
- (void)reload;	// 0x33a65831
// declared property getter: - (int)selectedIndex;	// 0x33a65c35
// declared property setter: - (void)setDataSource:(id)source;	// 0x33a6551d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33a65c25
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x33a655bd
// declared property setter: - (void)setOverlayImage:(id)image;	// 0x33a6553d
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x33a65c45
// declared property setter: - (void)setTitle:(id)title;	// 0x33a6557d
// declared property getter: - (id)title;	// 0x33a6559d
@end

