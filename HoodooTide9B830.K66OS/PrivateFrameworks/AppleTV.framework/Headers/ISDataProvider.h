/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSNumber, SSURLBagContext, SSAuthenticationContext, NSString;

__attribute__((visibility("hidden")))
@interface ISDataProvider : NSObject <NSCopying> {
@private
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	NSURL *_redirectURL;	// 32 = 0x20
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x32b5a235; S=0x32b5a249; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x32b5a1fd; S=0x32b5a211; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x32b5a26d; S=0x32b5a281; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x32b5a2a5; S=0x32b5a2d9; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x32b5a30d; S=0x32b5a321; @synthesize=_contentType
@property(retain) id output;	// G=0x32b5a345; S=0x32b5a359; @synthesize=_output
@property(retain) NSURL *redirectURL;	// G=0x32b5a37d; S=0x32b5a391; @synthesize=_redirectURL
+ (id)provider;	// 0x32b5a089
// declared property getter: - (id)authenticatedAccountDSID;	// 0x32b5a235
// declared property getter: - (id)authenticationContext;	// 0x32b5a1fd
// declared property getter: - (id)bagContext;	// 0x32b5a26d
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x32b5a0d1
- (void)closeStream;	// 0x32b5a0e1
- (void)configureFromProvider:(id)provider;	// 0x32b5a0e5
// declared property getter: - (long long)contentLength;	// 0x32b5a2a5
// declared property getter: - (id)contentType;	// 0x32b5a30d
- (id)copyWithZone:(NSZone *)zone;	// 0x32b59ff1
- (void)dealloc;	// 0x32b59f11
- (BOOL)isStream;	// 0x32b5a13d
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x32b5a141
// declared property getter: - (id)output;	// 0x32b5a345
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x32b5a1a5
// declared property getter: - (id)redirectURL;	// 0x32b5a37d
- (void)resetStream;	// 0x32b5a199
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x32b5a249
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x32b5a211
// declared property setter: - (void)setBagContext:(id)context;	// 0x32b5a281
// declared property setter: - (void)setContentLength:(long long)length;	// 0x32b5a2d9
// declared property setter: - (void)setContentType:(id)type;	// 0x32b5a321
// declared property setter: - (void)setOutput:(id)output;	// 0x32b5a359
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x32b5a391
- (void)setup;	// 0x32b5a1c9
- (long long)streamedBytes;	// 0x32b5a19d
@end
