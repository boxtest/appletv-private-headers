/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import "BackBoardServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"

@class NSString;

@interface BKSWorkspaceActivationResponse : NSObject <NSCopying, BKSXPCCoding> {
@private
	NSString *_bundleIdentifier;	// 4 = 0x4
	BOOL _willResume;	// 8 = 0x8
	BOOL _launchFailed;	// 9 = 0x9
}
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x3062c799; S=0x3062c7ad; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL launchFailed;	// G=0x3062c7dd; S=0x3062c7ed; @synthesize=_launchFailed
@property(assign, nonatomic) BOOL willResume;	// G=0x3062c7bd; S=0x3062c7cd; @synthesize=_willResume
+ (id)responseForLaunchFailure:(id)launchFailure;	// 0x3062c41d
+ (id)responseForWorkspaceUnsuspend:(id)workspaceUnsuspend;	// 0x3062c491
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x3062c695
// declared property getter: - (id)bundleIdentifier;	// 0x3062c799
- (id)copyWithZone:(NSZone *)zone;	// 0x3062c5e1
- (void)dealloc;	// 0x3062c505
- (id)description;	// 0x3062c551
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x3062c725
// declared property getter: - (BOOL)launchFailed;	// 0x3062c7dd
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3062c7ad
// declared property setter: - (void)setLaunchFailed:(BOOL)failed;	// 0x3062c7ed
// declared property setter: - (void)setWillResume:(BOOL)resume;	// 0x3062c7cd
// declared property getter: - (BOOL)willResume;	// 0x3062c7bd
@end

