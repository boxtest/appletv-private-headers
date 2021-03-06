/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectLight.h"

@class NSString;

@interface MCAction : MCObjectLight {
	unsigned long _flags;	// 4 = 0x4
	NSString *_targetObjectID;	// 8 = 0x8
}
@property(copy) NSString *targetObjectID;	// G=0x333f454d; S=0x333f4561; @synthesize=_targetObjectID
@property(assign, nonatomic) BOOL tracksInParent;	// G=0x333f43e9; S=0x333f43fd; 
- (id)initWithImprint:(id)imprint;	// 0x333f4309
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x333f44ad
- (void)demolish;	// 0x333f4361
- (id)description;	// 0x333f44dd
- (id)imprint;	// 0x333f438d
- (BOOL)isSnapshot;	// 0x333f4421
// declared property setter: - (void)setTargetObjectID:(id)anId;	// 0x333f4561
// declared property setter: - (void)setTracksInParent:(BOOL)parent;	// 0x333f43fd
- (id)snapshot;	// 0x333f4435
// declared property getter: - (id)targetObjectID;	// 0x333f454d
// declared property getter: - (BOOL)tracksInParent;	// 0x333f43e9
@end

