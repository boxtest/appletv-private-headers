/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"
#import "SSAuthenticationContext.h"
#import "NSMutableCopying.h"

@class NSNumber, NSString, NSDictionary, NSArray;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying> {
}
@property(copy, nonatomic) NSDictionary *HTTPHeaders;	// S=0x356a538d; @dynamic
@property(copy, nonatomic) NSString *accountName;	// S=0x356a5001; @dynamic
@property(assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// S=0x356a5045; @dynamic
@property(assign) int accountScope;	// S=0x356a5055; @dynamic
@property(assign, nonatomic) BOOL allowsRetry;	// S=0x356a5065; @dynamic
@property(assign, nonatomic) BOOL canCreateNewAccount;	// S=0x356a5075; @dynamic
@property(assign, nonatomic) BOOL canSetActiveAccount;	// S=0x356a5085; @dynamic
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x356a5339; @dynamic
@property(assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// S=0x356a537d; @dynamic
@property(copy, nonatomic) NSString *initialPassword;	// S=0x356a5095; @dynamic
@property(copy, nonatomic) NSString *preferredITunesStoreClient;	// S=0x356a50d9; @dynamic
@property(assign, nonatomic) int promptStyle;	// S=0x356a511d; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x356a512d; @dynamic
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier;	// S=0x356a5171; @dynamic
@property(assign, nonatomic) BOOL shouldFollowAccountButtons;	// S=0x356a51b5; @dynamic
@property(assign, nonatomic) BOOL shouldIgnoreProtocol;	// S=0x356a51c5; @dynamic
@property(assign, nonatomic) BOOL shouldSuppressDialogs;	// S=0x356a51d5; @dynamic
@property(copy, nonatomic) NSDictionary *signupRequestParameters;	// S=0x356a51e5; @dynamic
@property(assign, nonatomic) int tokenType;	// S=0x356a53d1; @dynamic
@property(copy, nonatomic) NSArray *userAgentComponents;	// S=0x356a5229; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x356a4f61
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x356a4fb1
// declared property setter: - (void)setAccountName:(id)name;	// 0x356a5001
// declared property setter: - (void)setAccountNameEditable:(BOOL)editable;	// 0x356a5045
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x356a5055
// declared property setter: - (void)setAllowsRetry:(BOOL)retry;	// 0x356a5065
// declared property setter: - (void)setCanCreateNewAccount:(BOOL)account;	// 0x356a5075
// declared property setter: - (void)setCanSetActiveAccount:(BOOL)account;	// 0x356a5085
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x356a5339
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x356a537d
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x356a538d
// declared property setter: - (void)setInitialPassword:(id)password;	// 0x356a5095
// declared property setter: - (void)setPreferredITunesStoreClient:(id)client;	// 0x356a50d9
// declared property setter: - (void)setPromptStyle:(int)style;	// 0x356a511d
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x356a512d
// declared property setter: - (void)setRequiredUniqueIdentifier:(id)identifier;	// 0x356a5171
// declared property setter: - (void)setShouldFollowAccountButtons:(BOOL)followAccountButtons;	// 0x356a51b5
// declared property setter: - (void)setShouldIgnoreProtocol:(BOOL)ignoreProtocol;	// 0x356a51c5
// declared property setter: - (void)setShouldSuppressDialogs:(BOOL)suppressDialogs;	// 0x356a51d5
// declared property setter: - (void)setSignupRequestParameters:(id)parameters;	// 0x356a51e5
// declared property setter: - (void)setTokenType:(int)type;	// 0x356a53d1
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x356a5229
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x356a526d
@end

