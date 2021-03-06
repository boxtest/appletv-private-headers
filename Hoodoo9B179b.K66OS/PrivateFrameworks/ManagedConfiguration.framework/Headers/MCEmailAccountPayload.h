/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
@private
	NSString *_emailAccountDescription;	// 60 = 0x3c
	NSString *_emailAccountName;	// 64 = 0x40
	NSString *_emailAccountType;	// 68 = 0x44
	NSString *_emailAddress;	// 72 = 0x48
	NSString *_incomingMailServerAuthentication;	// 76 = 0x4c
	NSString *_incomingMailServerHostname;	// 80 = 0x50
	NSNumber *_incomingMailServerPortNumber;	// 84 = 0x54
	BOOL _incomingMailServerUseSSL;	// 88 = 0x58
	NSString *_incomingMailServerUsername;	// 92 = 0x5c
	NSString *_incomingMailServerIMAPPathPrefix;	// 96 = 0x60
	NSString *_incomingPassword;	// 100 = 0x64
	NSString *_outgoingPassword;	// 104 = 0x68
	BOOL _outgoingPasswordSameAsIncomingPassword;	// 108 = 0x6c
	NSString *_outgoingMailServerAuthentication;	// 112 = 0x70
	NSString *_outgoingMailServerHostname;	// 116 = 0x74
	NSNumber *_outgoingMailServerPortNumber;	// 120 = 0x78
	BOOL _outgoingMailServerUseSSL;	// 124 = 0x7c
	NSString *_outgoingMailServerUsername;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) NSString *emailAccountDescription;	// G=0x348bcf0d; @synthesize=_emailAccountDescription
@property(readonly, assign, nonatomic) NSString *emailAccountName;	// G=0x348bcefd; @synthesize=_emailAccountName
@property(readonly, assign, nonatomic) NSString *emailAccountType;	// G=0x348bceed; @synthesize=_emailAccountType
@property(readonly, assign, nonatomic) NSString *emailAddress;	// G=0x348bcedd; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSString *incomingMailServerAuthentication;	// G=0x348bcecd; @synthesize=_incomingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *incomingMailServerHostname;	// G=0x348bcebd; @synthesize=_incomingMailServerHostname
@property(readonly, assign, nonatomic) NSString *incomingMailServerIMAPPathPrefix;	// G=0x348bce7d; @synthesize=_incomingMailServerIMAPPathPrefix
@property(readonly, assign, nonatomic) NSNumber *incomingMailServerPortNumber;	// G=0x348bcead; @synthesize=_incomingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL incomingMailServerUseSSL;	// G=0x348bce9d; @synthesize=_incomingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *incomingMailServerUsername;	// G=0x348bce8d; @synthesize=_incomingMailServerUsername
@property(readonly, assign, nonatomic) NSString *incomingPassword;	// G=0x348bce6d; @synthesize=_incomingPassword
@property(readonly, assign, nonatomic) NSString *outgoingMailServerAuthentication;	// G=0x348bce3d; @synthesize=_outgoingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *outgoingMailServerHostname;	// G=0x348bce2d; @synthesize=_outgoingMailServerHostname
@property(readonly, assign, nonatomic) NSNumber *outgoingMailServerPortNumber;	// G=0x348bce1d; @synthesize=_outgoingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL outgoingMailServerUseSSL;	// G=0x348bce0d; @synthesize=_outgoingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *outgoingMailServerUsername;	// G=0x348bcdfd; @synthesize=_outgoingMailServerUsername
@property(readonly, assign, nonatomic) NSString *outgoingPassword;	// G=0x348bce5d; @synthesize=_outgoingPassword
@property(readonly, assign, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;	// G=0x348bce4d; @synthesize=_outgoingPasswordSameAsIncomingPassword
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x348bd101
+ (id)profileNameFromAccountTag:(id)accountTag;	// 0x348bd081
+ (id)typeStrings;	// 0x348bd161
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348bd65d
- (void)dealloc;	// 0x348bcf1d
- (id)description;	// 0x348bd219
// declared property getter: - (id)emailAccountDescription;	// 0x348bcf0d
// declared property getter: - (id)emailAccountName;	// 0x348bcefd
// declared property getter: - (id)emailAccountType;	// 0x348bceed
// declared property getter: - (id)emailAddress;	// 0x348bcedd
// declared property getter: - (id)incomingMailServerAuthentication;	// 0x348bcecd
// declared property getter: - (id)incomingMailServerHostname;	// 0x348bcebd
// declared property getter: - (id)incomingMailServerIMAPPathPrefix;	// 0x348bce7d
// declared property getter: - (id)incomingMailServerPortNumber;	// 0x348bcead
// declared property getter: - (BOOL)incomingMailServerUseSSL;	// 0x348bce9d
// declared property getter: - (id)incomingMailServerUsername;	// 0x348bce8d
// declared property getter: - (id)incomingPassword;	// 0x348bce6d
// declared property getter: - (id)outgoingMailServerAuthentication;	// 0x348bce3d
// declared property getter: - (id)outgoingMailServerHostname;	// 0x348bce2d
// declared property getter: - (id)outgoingMailServerPortNumber;	// 0x348bce1d
// declared property getter: - (BOOL)outgoingMailServerUseSSL;	// 0x348bce0d
// declared property getter: - (id)outgoingMailServerUsername;	// 0x348bcdfd
// declared property getter: - (id)outgoingPassword;	// 0x348bce5d
// declared property getter: - (BOOL)outgoingPasswordSameAsIncomingPassword;	// 0x348bce4d
- (id)stubDictionary;	// 0x348bd5c1
- (id)subtitle1Description;	// 0x348bd1a9
- (id)subtitle1Label;	// 0x348bd1f9
- (id)subtitle2Description;	// 0x348bd189
- (id)subtitle2Label;	// 0x348bd199
- (id)title;	// 0x348bd209
@end

