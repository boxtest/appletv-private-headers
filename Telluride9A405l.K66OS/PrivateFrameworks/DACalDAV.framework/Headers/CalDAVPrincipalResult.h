/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSString;

@interface CalDAVPrincipalResult : NSObject {
	NSString *_firstName;	// 4 = 0x4
	NSString *_lastName;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSString *_type;	// 16 = 0x10
	NSString *_principal;	// 20 = 0x14
	NSMutableArray *_emails;	// 24 = 0x18
	NSMutableArray *_cuAddresses;	// 28 = 0x1c
}
@property(retain) NSArray *cuAddresses;	// G=0x3023fb25; S=0x3023fb39; @synthesize=_cuAddresses
@property(retain) NSString *displayName;	// G=0x3023fa45; S=0x3023fa59; @synthesize=_displayName
@property(readonly, assign) NSString *emailAddress;	// G=0x3023f821; 
@property(retain) NSArray *emailAddresses;	// G=0x3023fab5; S=0x3023fac9; @synthesize=_emails
@property(retain) NSString *firstName;	// G=0x3023f9d5; S=0x3023f9e9; @synthesize=_firstName
@property(retain) NSString *lastName;	// G=0x3023fa0d; S=0x3023fa21; @synthesize=_lastName
@property(readonly, assign) NSString *preferredCUAddress;	// G=0x3023f6e9; 
@property(retain) NSString *principalPath;	// G=0x3023faed; S=0x3023fb01; @synthesize=_principal
@property(retain) NSString *resultType;	// G=0x3023fa7d; S=0x3023fa91; @synthesize=_type
+ (id)resultFromResponse:(id)response;	// 0x3023f619
- (id)init;	// 0x3023eff5
- (id)initWithResponse:(id)response;	// 0x3023f1b5
- (void)addCUAddress:(id)address;	// 0x3023f661
- (void)addEmail:(id)email;	// 0x3023f6a5
- (id)convertToDAContactSearchResultElement;	// 0x302205dd
// declared property getter: - (id)cuAddresses;	// 0x3023fb25
- (void)dealloc;	// 0x3023f0f1
- (id)description;	// 0x3023f939
// declared property getter: - (id)displayName;	// 0x3023fa45
// declared property getter: - (id)emailAddress;	// 0x3023f821
// declared property getter: - (id)emailAddresses;	// 0x3023fab5
// declared property getter: - (id)firstName;	// 0x3023f9d5
// declared property getter: - (id)lastName;	// 0x3023fa0d
// declared property getter: - (id)preferredCUAddress;	// 0x3023f6e9
// declared property getter: - (id)principalPath;	// 0x3023faed
// declared property getter: - (id)resultType;	// 0x3023fa7d
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x3023fb39
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3023fa59
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3023fac9
// declared property setter: - (void)setFirstName:(id)name;	// 0x3023f9e9
// declared property setter: - (void)setLastName:(id)name;	// 0x3023fa21
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x3023fb01
// declared property setter: - (void)setResultType:(id)type;	// 0x3023fa91
@end

