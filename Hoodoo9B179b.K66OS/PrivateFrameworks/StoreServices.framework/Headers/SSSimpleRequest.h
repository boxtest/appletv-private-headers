/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSString, NSDictionary, CPDistributedMessagingCenter;

@interface SSSimpleRequest : SSRequest {
@private
	NSString *_messageName;	// 36 = 0x24
	CPDistributedMessagingCenter *_messagingCenter;	// 40 = 0x28
	id _didFailBlock;	// 44 = 0x2c
	id _didFinishBlock;	// 48 = 0x30
	id _responseBlock;	// 52 = 0x34
	NSDictionary *_userInfo;	// 56 = 0x38
}
@property(copy, nonatomic) id didFailBlock;	// G=0x33ca4631; S=0x33ca4641; @synthesize=_didFailBlock
@property(copy, nonatomic) id didFinishBlock;	// G=0x33ca4665; S=0x33ca4675; @synthesize=_didFinishBlock
@property(readonly, assign, nonatomic) NSString *messageName;	// G=0x33ca4699; @synthesize=_messageName
@property(readonly, assign, nonatomic) CPDistributedMessagingCenter *messagingCenter;	// G=0x33ca46a9; @synthesize=_messagingCenter
@property(copy, nonatomic) id responseBlock;	// G=0x33ca46b9; S=0x33ca46c9; @synthesize=_responseBlock
@property(readonly, assign, nonatomic) NSDictionary *userInfo;	// G=0x33ca46ed; @synthesize=_userInfo
- (id)init;	// 0x33ca42c5
- (id)initWithMessageName:(id)messageName userInfo:(id)info;	// 0x33ca42d9
- (id)initWithMessagingCenter:(id)messagingCenter messageName:(id)name userInfo:(id)info;	// 0x33ca4305
- (void)dealloc;	// 0x33ca4411
// declared property getter: - (id)didFailBlock;	// 0x33ca4631
// declared property getter: - (id)didFinishBlock;	// 0x33ca4665
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x33ca44c1
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x33ca4519
// declared property getter: - (id)messageName;	// 0x33ca4699
// declared property getter: - (id)messagingCenter;	// 0x33ca46a9
// declared property getter: - (id)responseBlock;	// 0x33ca46b9
- (void)sendDidFailWithError:(id)send;	// 0x33ca45f5
- (void)sendDidFinish;	// 0x33ca4615
// declared property setter: - (void)setDidFailBlock:(id)failBlock;	// 0x33ca4641
// declared property setter: - (void)setDidFinishBlock:(id)finishBlock;	// 0x33ca4675
// declared property setter: - (void)setResponseBlock:(id)block;	// 0x33ca46c9
// declared property getter: - (id)userInfo;	// 0x33ca46ed
@end
