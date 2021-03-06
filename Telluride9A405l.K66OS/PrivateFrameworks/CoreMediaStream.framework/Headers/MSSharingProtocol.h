/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSString, NSArray, NSURL;
@protocol MSSharingProtocolDelegate;

@interface MSSharingProtocol : NSObject {
@private
	MSShPCContext _context;	// 4 = 0x4
	NSString *_personID;	// 88 = 0x58
	NSURL *_inviteURL;	// 92 = 0x5c
	NSURL *_manageURL;	// 96 = 0x60
	NSURL *_respondURL;	// 100 = 0x64
	NSURL *_statusURL;	// 104 = 0x68
	NSArray *_shares;	// 108 = 0x6c
	int _transactionType;	// 112 = 0x70
	id<MSSharingProtocolDelegate> _delegate;	// 116 = 0x74
}
@property(assign, nonatomic) id<MSSharingProtocolDelegate> delegate;	// G=0x36fec649; S=0x36fec659; @synthesize=_delegate
@property(readonly, assign) NSString *personID;	// G=0x36fec669; @synthesize=_personID
+ (id)_dictShareStateFromShareState:(int)shareState;	// 0x36feb561
+ (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x36fec151
+ (id)_shareDictFromShare:(id)share;	// 0x36feb715
+ (id)_shareDictsArrayFromShares:(id)shares;	// 0x36feb9e1
+ (id)_shareFromShareDict:(id)shareDict;	// 0x36feb585
+ (int)_shareStateFromShareDictShareState:(id)shareDictShareState;	// 0x36feb541
+ (id)_sharesFromShareDictsArray:(id)shareDictsArray;	// 0x36feb8fd
+ (id)shareFromPushUserInfo:(id)pushUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3 outError:(id *)error;	// 0x36fec1cd
+ (id)shareStateFromProtocol:(id)protocol;	// 0x36fec115
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x36feb171
- (void)_checkForFailedInvitesWithResponse:(id)response;	// 0x36febd4d
- (void)_didFailAuthenticationWithError:(id)error;	// 0x36fec065
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x36fec089
- (void)_didFindShareState:(id)state;	// 0x36febd01
- (void)_didFinishTransactionWithResponseObject:(id)responseObject error:(id)error;	// 0x36febfdd
- (void)abort;	// 0x36fec0d5
- (void)dealloc;	// 0x36feb46d
// declared property getter: - (id)delegate;	// 0x36fec649
- (void)deleteShares:(id)shares;	// 0x36febc8d
- (void)modifyShares:(id)shares;	// 0x36febc19
// declared property getter: - (id)personID;	// 0x36fec669
- (void)requestCurrentShareState;	// 0x36febbd5
- (void)sendInvitations:(id)invitations;	// 0x36febac5
- (void)sendResponseToInvitation:(id)invitation accept:(BOOL)accept;	// 0x36febb59
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36fec659
@end

