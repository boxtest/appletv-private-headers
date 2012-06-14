/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetResourceLoadingRequestInternal, NSURLRequest;

@interface AVAssetResourceLoadingRequest : NSObject {
@private
	AVAssetResourceLoadingRequestInternal *_loadingRequest;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL finished;	// G=0x367b8879; 
@property(readonly, assign, nonatomic) NSURLRequest *request;	// G=0x367b8859; 
- (id)initWithResourceLoader:(id)resourceLoader requestDictionary:(id)dictionary;	// 0x367b8585
- (void)_finishLoadingURLRequestWithDictionary:(id)dictionary context:(id)context;	// 0x367b8a9d
- (void)dealloc;	// 0x367b8715
- (id)description;	// 0x367b87f1
- (void)finalize;	// 0x367b87ad
- (void)finishLoadingWithError:(id)error;	// 0x367b8dd9
- (void)finishLoadingWithResponse:(id)response data:(id)data redirect:(id)redirect;	// 0x367b8c95
// declared property getter: - (BOOL)finished;	// 0x367b8879
// declared property getter: - (id)request;	// 0x367b8859
- (id)serializableRepresentation;	// 0x367b8899
- (id)streamingContentKeyRequestDataForApp:(id)app contentIdentifier:(id)identifier options:(id)options error:(id *)error;	// 0x367b8ea1
@end
