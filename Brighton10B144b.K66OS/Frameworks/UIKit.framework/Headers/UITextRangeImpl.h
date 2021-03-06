/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
	DOMRange *_domRange;	// 4 = 0x4
	int _affinityIfCollapsed;	// 8 = 0x8
}
@property(assign, nonatomic) int affinity;	// G=0x32bd515d; S=0x32bd39cd; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x32bd4ee5; S=0x32bd39bd; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x32b6ad6d
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x32b6ad81
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x32bd50ed
// declared property getter: - (int)affinity;	// 0x32bd515d
- (void)dealloc;	// 0x32bed901
- (id)description;	// 0x32dee839
// declared property getter: - (id)domRange;	// 0x32bd4ee5
- (id)end;	// 0x32c01725
- (BOOL)isEmpty;	// 0x32bd4eb1
- (BOOL)isEqual:(id)equal;	// 0x32c01c29
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x32bd39cd
// declared property setter: - (void)setDomRange:(id)range;	// 0x32bd39bd
- (id)start;	// 0x32bd5041
@end

