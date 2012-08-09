/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVLeafDataPayload.h"
#import "NSObject.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSData, NSString, NSArray;

@protocol CoreDAVLeafDataPayload <NSObject>
@optional
@property(readonly, assign) NSArray *childrenOrder;
@required
@property(readonly, assign) NSData *dataPayload;
@property(retain) NSURL *serverID;
@property(readonly, assign) NSString *syncKey;
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;
@optional
// declared property getter: - (id)childrenOrder;
@required
// declared property getter: - (id)dataPayload;
// declared property getter: - (id)serverID;
// declared property setter: - (void)setServerID:(id)anId;
// declared property getter: - (id)syncKey;
@end

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {
	NSURL *_serverID;	// 4 = 0x4
	NSString *_syncKey;	// 8 = 0x8
	NSData *_dataPayload;	// 12 = 0xc
}
@property(readonly, assign) NSArray *childrenOrder;
@property(readonly, assign) NSData *dataPayload;	// G=0x34c058b9; @synthesize=_dataPayload
@property(retain) NSURL *serverID;	// G=0x34c05895; S=0x34c058a9; @synthesize=_serverID
@property(readonly, assign) NSString *syncKey;	// G=0x34c058cd; @synthesize=_syncKey
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x34c05791
// declared property getter: - (id)dataPayload;	// 0x34c058b9
- (void)dealloc;	// 0x34c0581d
// declared property getter: - (id)serverID;	// 0x34c05895
// declared property setter: - (void)setServerID:(id)anId;	// 0x34c058a9
// declared property getter: - (id)syncKey;	// 0x34c058cd
@end
