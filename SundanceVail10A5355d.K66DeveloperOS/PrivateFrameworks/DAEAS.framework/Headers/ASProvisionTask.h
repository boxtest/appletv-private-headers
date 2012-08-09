/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString, ASPolicy, NSDictionary;

@interface ASProvisionTask : ASTask {
	int _type;	// 108 = 0x6c
	ASPolicy *_policy;	// 112 = 0x70
	NSString *_key;	// 116 = 0x74
	NSDictionary *_deviceInfo;	// 120 = 0x78
}
@property(retain) NSDictionary *deviceInfo;	// G=0x34ba2a95; S=0x34ba2aa9; @synthesize=_deviceInfo
@property(readonly, assign) int type;	// G=0x34ba1f49; converted property
- (id)initWithOriginalKeyForPolicyRequest:(id)policyRequest;	// 0x34ba1e69
- (id)initWithPolicyAcknowledgement:(id)policyAcknowledgement withKey:(id)key;	// 0x34ba1e89
- (id)initWithRemoteWipeAcknowledgement:(id)remoteWipeAcknowledgement withKey:(id)key;	// 0x34ba1ead
- (id)_initWithType:(int)type policy:(id)policy key:(id)key;	// 0x34ba1dd9
- (id)_policyID;	// 0x34ba1f59
- (id)_provisioningType;	// 0x34ba1f91
- (int)commandCode;	// 0x34ba1f8d
- (void)dealloc;	// 0x34ba1ed1
// declared property getter: - (id)deviceInfo;	// 0x34ba2a95
- (void)finishWithError:(id)error;	// 0x34ba2829
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x34ba248d
- (BOOL)processContext:(id)context;	// 0x34ba24a1
- (id)requestBody;	// 0x34ba1fe9
// declared property setter: - (void)setDeviceInfo:(id)info;	// 0x34ba2aa9
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34ba246d
// converted property getter: - (int)type;	// 0x34ba1f49
@end
