/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRMarqueeTextControl, NSString;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterDescriptionView : BRControl {
	BRTextControl *_clusterNameControl;	// 84 = 0x54
	BRTextControl *_basedOnLabelControl;	// 88 = 0x58
	BRMarqueeTextControl *_basedOnTextControl;	// 92 = 0x5c
}
@property(copy, nonatomic) NSString *basedOnText;	// G=0x19938d; S=0x1993c5; 
@property(copy, nonatomic) NSString *clusterName;	// G=0x199355; S=0x1992e5; 
- (id)init;	// 0x199125
// declared property getter: - (id)basedOnText;	// 0x19938d
// declared property getter: - (id)clusterName;	// 0x199355
- (void)dealloc;	// 0x19926d
- (void)layoutSubcontrols;	// 0x199435
// declared property setter: - (void)setBasedOnText:(id)text;	// 0x1993c5
// declared property setter: - (void)setClusterName:(id)name;	// 0x1992e5
@end

