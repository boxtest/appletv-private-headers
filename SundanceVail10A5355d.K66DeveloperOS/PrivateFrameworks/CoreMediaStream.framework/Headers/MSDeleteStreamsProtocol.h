/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"

@class NSMutableArray;
@protocol MSDeleteStreamsProtocolDelegate;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {
	MSDSPCContext _context;	// 12 = 0xc
	NSMutableArray *_collectionsInFlight;	// 92 = 0x5c
}
@property(assign, nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate;	// @dynamic
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3389c545
- (void).cxx_destruct;	// 0x3389cfb5
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x3389cf4d
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x3389c94d
- (void)_resetConnectionVariables;	// 0x3389cf9d
- (void)abort;	// 0x3389c69d
- (void)sendDeletionRequestForAssetCollections:(id)assetCollections;	// 0x3389c6b1
@end
