/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSString;

@interface BKSApplicationDeactivationSettings : NSObject <NSCopying, BKSXPCCoding> {
	BOOL _animated;	// 4 = 0x4
	BOOL _underLock;	// 5 = 0x5
	BOOL _flip;	// 6 = 0x6
	BOOL _crossfade;	// 7 = 0x7
	NSString *_contextInfo;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL animated;	// G=0x335047f9; S=0x33504809; @synthesize=_animated
@property(copy, nonatomic) NSString *contextInfo;	// G=0x33504879; S=0x3350488d; @synthesize=_contextInfo
@property(assign, nonatomic) BOOL crossfade;	// G=0x33504859; S=0x33504869; @synthesize=_crossfade
@property(assign, nonatomic) BOOL flip;	// G=0x33504839; S=0x33504849; @synthesize=_flip
@property(assign, nonatomic) BOOL underLock;	// G=0x33504819; S=0x33504829; @synthesize=_underLock
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x3350439d
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x33504671
// declared property getter: - (BOOL)animated;	// 0x335047f9
// declared property getter: - (id)contextInfo;	// 0x33504879
- (id)copyWithZone:(NSZone *)zone;	// 0x33504635
// declared property getter: - (BOOL)crossfade;	// 0x33504859
- (void)dealloc;	// 0x33504489
- (id)description;	// 0x335044d5
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x3350473d
// declared property getter: - (BOOL)flip;	// 0x33504839
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x33504809
// declared property setter: - (void)setContextInfo:(id)info;	// 0x3350488d
// declared property setter: - (void)setCrossfade:(BOOL)crossfade;	// 0x33504869
// declared property setter: - (void)setFlip:(BOOL)flip;	// 0x33504849
// declared property setter: - (void)setUnderLock:(BOOL)lock;	// 0x33504829
// declared property getter: - (BOOL)underLock;	// 0x33504819
@end

