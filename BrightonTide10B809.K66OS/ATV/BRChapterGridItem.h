/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary, BRMarqueeTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x2d1149; S=0x2d0e25; converted property
- (id)init;	// 0x2d0d51
// converted property getter: - (id)chapterInfo;	// 0x2d1149
- (void)controlWasFocused;	// 0x2d1159
- (void)controlWasUnfocused;	// 0x2d11c9
- (void)dealloc;	// 0x2d0dad
- (void)layoutSubcontrols;	// 0x2d1219
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x2d0e25
@end
