/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString, NSURL;

@interface BBAction : NSObject {
	id _internalBlock;	// 4 = 0x4
	BOOL _hasCallblock;	// 8 = 0x8
	BOOL _canBypassPinLock;	// 9 = 0x9
	NSURL *_launchURL;	// 12 = 0xc
	NSString *_launchBundleID;	// 16 = 0x10
	int _replyType;	// 20 = 0x14
	NSString *_activatePluginName;	// 24 = 0x18
	NSDictionary *_activatePluginContext;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *activatePluginContext;	// G=0x33cbcc99; S=0x33cbccad; @synthesize=_activatePluginContext
@property(copy, nonatomic) NSString *activatePluginName;	// G=0x33cbcc75; S=0x33cbcc89; @synthesize=_activatePluginName
@property(assign, nonatomic) BOOL canBypassPinLock;	// G=0x33cbcc55; S=0x33cbcc65; @synthesize=_canBypassPinLock
@property(assign, nonatomic) BOOL hasCallblock;	// G=0x33cbcbd1; S=0x33cbcbe1; @synthesize=_hasCallblock
@property(copy, nonatomic) id internalBlock;	// G=0x33cbcbad; S=0x33cbcbc1; @synthesize=_internalBlock
@property(copy, nonatomic) NSString *launchBundleID;	// G=0x33cbcc11; S=0x33cbcc25; @synthesize=_launchBundleID
@property(retain, nonatomic) NSURL *launchURL;	// G=0x33cbcbf1; S=0x33cbcc01; @synthesize=_launchURL
@property(assign, nonatomic) int replyType;	// G=0x33cbcc35; S=0x33cbcc45; @synthesize=_replyType
+ (id)actionWithActivatePluginName:(id)activatePluginName activationContext:(id)context;	// 0x33cbbf59
+ (id)actionWithCallblock:(id)callblock;	// 0x33cbbe79
+ (id)actionWithLaunchBundleID:(id)launchBundleID callblock:(id)callblock;	// 0x33cbbee9
+ (id)actionWithLaunchURL:(id)launchURL callblock:(id)callblock;	// 0x33cbbeb5
+ (id)actionWithTextReplyCallblock:(id)textReplyCallblock;	// 0x33cbbf1d
- (id)initWithActivatePluginName:(id)activatePluginName activationContext:(id)context;	// 0x33cbc0a1
- (id)initWithCallblock:(id)callblock;	// 0x33cbbf99
- (id)initWithCoder:(id)coder;	// 0x33cbc845
- (id)initWithTextReplyCallblock:(id)textReplyCallblock;	// 0x33cbc00d
- (id)_initWithInternalCallblock:(id)internalCallblock replyType:(int)type;	// 0x33cbc101
// declared property getter: - (id)activatePluginContext;	// 0x33cbcc99
// declared property getter: - (id)activatePluginName;	// 0x33cbcc75
- (id)bundleID;	// 0x33cbc2a5
// declared property getter: - (BOOL)canBypassPinLock;	// 0x33cbcc55
- (id)copyWithZone:(NSZone *)zone;	// 0x33cbc835
- (void)dealloc;	// 0x33cbc179
- (void)deliverResponse:(id)response;	// 0x33cbc2b5
- (id)description;	// 0x33cbcb3d
- (void)encodeWithCoder:(id)coder;	// 0x33cbc9f9
// declared property getter: - (BOOL)hasCallblock;	// 0x33cbcbd1
- (BOOL)hasLaunchInfo;	// 0x33cbc219
- (unsigned)hash;	// 0x33cbc7a9
// declared property getter: - (id)internalBlock;	// 0x33cbcbad
- (BOOL)isAppLaunchAction;	// 0x33cbc27d
- (BOOL)isEqual:(id)equal;	// 0x33cbc55d
- (BOOL)isURLLaunchAction;	// 0x33cbc265
// declared property getter: - (id)launchBundleID;	// 0x33cbcc11
// declared property getter: - (id)launchURL;	// 0x33cbcbf1
- (id)partialDescription;	// 0x33cbc301
// declared property getter: - (int)replyType;	// 0x33cbcc35
// declared property setter: - (void)setActivatePluginContext:(id)context;	// 0x33cbccad
// declared property setter: - (void)setActivatePluginName:(id)name;	// 0x33cbcc89
// declared property setter: - (void)setCanBypassPinLock:(BOOL)lock;	// 0x33cbcc65
// declared property setter: - (void)setHasCallblock:(BOOL)callblock;	// 0x33cbcbe1
// declared property setter: - (void)setInternalBlock:(id)block;	// 0x33cbcbc1
// declared property setter: - (void)setLaunchBundleID:(id)anId;	// 0x33cbcc25
// declared property setter: - (void)setLaunchURL:(id)url;	// 0x33cbcc01
// declared property setter: - (void)setReplyType:(int)type;	// 0x33cbcc45
- (id)url;	// 0x33cbc295
- (BOOL)wantsTextReply;	// 0x33cbc249
@end

