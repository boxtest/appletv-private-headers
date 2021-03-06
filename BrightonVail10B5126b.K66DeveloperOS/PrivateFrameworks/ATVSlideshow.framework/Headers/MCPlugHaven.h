/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 64 = 0x40
	MCContainerNavigator *mSupercontainer;	// 68 = 0x44
}
@property(retain, nonatomic) MCAction *actionOnCompletion;	// G=0x33261731; S=0x33261751; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x332617c5; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x332617e9; S=0x332617fd; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33261605
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33261771
// declared property getter: - (id)actionOnCompletion;	// 0x33261731
- (void)demolish;	// 0x33261675
// declared property getter: - (id)idInSupercontainer;	// 0x332617c5
- (id)imprint;	// 0x332616d5
// declared property setter: - (void)setActionOnCompletion:(id)completion;	// 0x33261751
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x332617d9
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x332617fd
// declared property getter: - (id)supercontainer;	// 0x332617e9
@end

