/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class NSString, BRMarqueeTextControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterDescriptionView : BRControl {
	BRTextControl *_clusterNameControl;	// 80 = 0x50
	BRTextControl *_basedOnLabelControl;	// 84 = 0x54
	BRMarqueeTextControl *_basedOnTextControl;	// 88 = 0x58
}
@property(copy, nonatomic) NSString *basedOnText;	// G=0x19fd31; S=0x19fd69; 
@property(copy, nonatomic) NSString *clusterName;	// G=0x19fcf9; S=0x19fc89; 
- (id)init;	// 0x19fac9
// declared property getter: - (id)basedOnText;	// 0x19fd31
// declared property getter: - (id)clusterName;	// 0x19fcf9
- (void)dealloc;	// 0x19fc11
- (void)layoutSubcontrols;	// 0x19fdd9
// declared property setter: - (void)setBasedOnText:(id)text;	// 0x19fd69
// declared property setter: - (void)setClusterName:(id)name;	// 0x19fc89
@end
