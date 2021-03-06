/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class SSURLRequestProperties, NSArray, NSString, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
@private
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x31546535; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x315465fd; 
@property(readonly, assign) int assetType;	// G=0x31546b75; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x31546b85; 
@property(readonly, assign) NSString *downloadPath;	// G=0x31546bb9; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x31546c11; 
@property(readonly, assign) long long fileSize;	// G=0x31546bd9; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x31546bd5; 
@property(readonly, assign) NSArray *sinfs;	// G=0x31546519; 
+ (long long)_existsMessage;	// 0x31546589
+ (long long)_getExternalValuesMessage;	// 0x31546591
+ (long long)_getValueMessage;	// 0x31546599
+ (long long)_setValuesMessage;	// 0x315465a1
+ (id)assetWithURL:(id)url type:(int)type;	// 0x31546ac9
- (id)initWithURLRequest:(id)urlrequest;	// 0x31546421
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x31546b49
// declared property getter: - (id)URLRequest;	// 0x31546535
// declared property getter: - (id)URLRequestProperties;	// 0x315465fd
- (id)_copyURLRequestProperties;	// 0x31546c41
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x31546625
- (int)_legacyAssetType;	// 0x315469cd
- (void)_resetLocalIVars;	// 0x315465a9
// converted property getter: - (int)assetType;	// 0x31546b75
- (long long)bytesDownloaded;	// 0x315464e1
- (void *)copyXPCEncoding;	// 0x315469dd
- (void)dealloc;	// 0x31546495
// declared property getter: - (id)downloadFileName;	// 0x31546b85
// declared property getter: - (id)downloadPath;	// 0x31546bb9
// declared property getter: - (long long)fileSize;	// 0x31546bd9
// declared property getter: - (id)finalizedPath;	// 0x31546bd5
// declared property getter: - (BOOL)isExternal;	// 0x31546c11
// declared property getter: - (id)sinfs;	// 0x31546519
@end

