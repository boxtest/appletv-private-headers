/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSString, NSArray, NSMutableArray;
@protocol CoreDAVDiscoveryTaskGroupDelegate, CoreDAVAccountInfoProvider;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
	NSString *_requiredComplianceClass;	// 44 = 0x2c
	NSArray *_httpPorts;	// 48 = 0x30
	NSArray *_httpsPorts;	// 52 = 0x34
	NSString *_httpServiceString;	// 56 = 0x38
	NSString *_httpsServiceString;	// 60 = 0x3c
	NSString *_wellKnownPath;	// 64 = 0x40
	NSArray *_potentialContextPaths;	// 68 = 0x44
	NSMutableArray *_discoveries;	// 72 = 0x48
	BOOL _didReceiveAuthenticationError;	// 76 = 0x4c
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;	// 80 = 0x50
}
@property(assign, nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate;	// @dynamic
@property(assign) BOOL didReceiveAuthenticationError;	// G=0x30feabe5; S=0x30feabf5; @synthesize=_didReceiveAuthenticationError
@property(retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;	// G=0x30feac05; S=0x30feac19; @synthesize=_discoveredAccountInfo
@property(retain, nonatomic) NSArray *potentialContextPaths;	// G=0x30feac71; S=0x30feac81; @synthesize=_potentialContextPaths
@property(retain, nonatomic) NSString *wellKnownPath;	// G=0x30feac3d; S=0x30feac4d; @synthesize=_wellKnownPath
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x30fe6161
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPath:(id)path potentialContextPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x30fe5fb9
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x30fe6111
- (void)addToDiscoveryArray:(id *)discoveryArray discovery:(id)discovery;	// 0x30fea95d
- (id)allDiscoveryPaths:(id)paths;	// 0x30fe72fd
- (id)allDiscoveryPorts:(id)ports withScheme:(id)scheme;	// 0x30fe7221
- (void)cancelTaskGroup;	// 0x30fe6329
- (id)cleanedStringsFromResponseHeaders:(id)responseHeaders forHeader:(id)header;	// 0x30fea811
- (void)completeDiscovery:(id)discovery error:(id)error;	// 0x30fe94bd
- (void)completeOptionsTask:(id)task error:(id)error;	// 0x30fe8efd
- (void)dealloc;	// 0x30fe61f1
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x30feabe5
// declared property getter: - (id)discoveredAccountInfo;	// 0x30feac05
- (id)extractPrincipalURLFromPropFindTask:(id)propFindTask error:(id *)error;	// 0x30fea3b9
- (void)getDiscoveryStatus:(id)status priorFailed:(id *)failed subsequentFailed:(id *)failed3 priorIncomplete:(id *)incomplete subsequentIncomplete:(id *)incomplete5 priorSuccess:(id *)success subsequentSuccess:(id *)success7;	// 0x30fea9a5
- (void)optionsTask:(id)task error:(id)error;	// 0x30fe9205
// declared property getter: - (id)potentialContextPaths;	// 0x30feac71
- (id)propFindProperties;	// 0x30fea1a9
- (void)propFindTaskFinished:(id)finished;	// 0x30fe926d
// declared property setter: - (void)setDidReceiveAuthenticationError:(BOOL)receiveAuthenticationError;	// 0x30feabf5
// declared property setter: - (void)setDiscoveredAccountInfo:(id)info;	// 0x30feac19
// declared property setter: - (void)setPotentialContextPaths:(id)paths;	// 0x30feac81
// declared property setter: - (void)setWellKnownPath:(id)path;	// 0x30feac4d
- (id)setupDiscoveries:(id)discoveries withSchemes:(id)schemes;	// 0x30fe6ead
- (void)srvLookupTask:(id)task error:(id)error;	// 0x30fe8639
- (void)startOptionsTask:(id)task;	// 0x30fe81a1
- (void)startPropfindTask:(id)task;	// 0x30fe833d
- (void)startSRVLookup:(id)lookup serviceString:(id)string;	// 0x30fe7381
- (void)startTaskGroup;	// 0x30fe63ed
- (void)startWellKnownFallbackHeadTask:(id)task withURL:(id)url;	// 0x30fe7ac5
- (void)startWellKnownLocationTask:(id)task withURL:(id)url;	// 0x30fe7525
- (void)syncAway;	// 0x30fe6e9d
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30fe85dd
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30fe62dd
// declared property getter: - (id)wellKnownPath;	// 0x30feac3d
@end

