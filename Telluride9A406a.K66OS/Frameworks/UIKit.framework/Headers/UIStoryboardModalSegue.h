/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegue.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegue : UIStoryboardSegue {
@private
	BOOL _useDefaultModalPresentationStyle;	// 16 = 0x10
	BOOL _useDefaultModalTransitionStyle;	// 17 = 0x11
	int _modalPresentationStyle;	// 20 = 0x14
	int _modalTransitionStyle;	// 24 = 0x18
}
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x359ede7d; S=0x359ede8d; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x359ede9d; S=0x359edead; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x359ede3d; S=0x359ede4d; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x359ede5d; S=0x359ede6d; @synthesize=_useDefaultModalTransitionStyle
// declared property getter: - (int)modalPresentationStyle;	// 0x359ede7d
// declared property getter: - (int)modalTransitionStyle;	// 0x359ede9d
- (void)perform;	// 0x359edd51
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x359ede8d
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x359edead
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x359ede4d
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x359ede6d
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x359ede3d
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x359ede5d
@end

