/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSURL, NSMutableSet, NSSet, NSMutableArray;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
	BOOL _serverSupportsExpandPropertyReport;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
	NSMutableArray *_readPrincipalURLs;	// 52 = 0x34
	NSMutableArray *_writePrincipalURLs;	// 56 = 0x38
	NSMutableSet *_writeDetails;	// 60 = 0x3c
	NSMutableSet *_readDetails;	// 64 = 0x40
}
@property(retain) NSURL *principalURL;	// G=0x32ece4f5; S=0x32ece509; @synthesize=_principalURL
@property(retain) NSMutableSet *readDetails;	// G=0x32ece585; S=0x32ece599; @synthesize=_readDetails
@property(readonly, assign) NSSet *readOnlyPrincipalDetails;	// G=0x32ece455; 
@property(retain) NSMutableArray *readPrincipalURLs;	// G=0x32ece519; S=0x32ece52d; @synthesize=_readPrincipalURLs
@property(readonly, assign) NSSet *readWritePrincipalDetails;	// G=0x32ece48d; 
@property(assign) BOOL serverSupportsExpandPropertyReport;	// G=0x32ece4c5; S=0x32ece4dd; @synthesize=_serverSupportsExpandPropertyReport
@property(retain) NSMutableSet *writeDetails;	// G=0x32ece561; S=0x32ece575; @synthesize=_writeDetails
@property(retain) NSMutableArray *writePrincipalURLs;	// G=0x32ece53d; S=0x32ece551; @synthesize=_writePrincipalURLs
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x32ecdecd
- (void)_getPrincipalDetailsForURL:(id)url;	// 0x32ece271
- (id)_mappingsForPrincipalDetails;	// 0x32ecdfb5
- (id)_popFromArray:(id)array;	// 0x32ece30d
- (void)_processDetailsFromMultiStatus:(id)multiStatus allowWrite:(BOOL)write;	// 0x32ece139
- (void)dealloc;	// 0x32ecde2d
// declared property getter: - (id)principalURL;	// 0x32ece4f5
// declared property getter: - (id)readDetails;	// 0x32ece585
// declared property getter: - (id)readOnlyPrincipalDetails;	// 0x32ece455
// declared property getter: - (id)readPrincipalURLs;	// 0x32ece519
// declared property getter: - (id)readWritePrincipalDetails;	// 0x32ece48d
// declared property getter: - (BOOL)serverSupportsExpandPropertyReport;	// 0x32ece4c5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x32ece509
// declared property setter: - (void)setReadDetails:(id)details;	// 0x32ece599
// declared property setter: - (void)setReadPrincipalURLs:(id)urls;	// 0x32ece52d
// declared property setter: - (void)setServerSupportsExpandPropertyReport:(BOOL)report;	// 0x32ece4dd
// declared property setter: - (void)setWriteDetails:(id)details;	// 0x32ece575
// declared property setter: - (void)setWritePrincipalURLs:(id)urls;	// 0x32ece551
- (void)task:(id)task didFinishWithError:(id)error;	// 0x32ece35d
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x32ece3d9
// declared property getter: - (id)writeDetails;	// 0x32ece561
// declared property getter: - (id)writePrincipalURLs;	// 0x32ece53d
@end
