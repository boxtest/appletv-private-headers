/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSMutableSet, NSString;

@interface MCAsset : MCObject {
	NSString *mPath;	// 12 = 0xc
	NSMutableSet *mTexts;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isInUse;	// G=0x30ad849d; 
@property(copy) NSString *path;	// G=0x30ad8551; S=0x30ad8565; @synthesize=mPath
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30ad8379
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x30ad850d
- (void)demolish;	// 0x30ad83e9
- (void)forgetText:(id)text;	// 0x30ad84ed
- (id)imprint;	// 0x30ad843d
// declared property getter: - (BOOL)isInUse;	// 0x30ad849d
- (void)learnText:(id)text;	// 0x30ad84cd
// declared property getter: - (id)path;	// 0x30ad8551
// declared property setter: - (void)setPath:(id)path;	// 0x30ad8565
@end

