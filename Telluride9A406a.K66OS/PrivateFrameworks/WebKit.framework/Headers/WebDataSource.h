/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebDataSourcePrivate;

@interface WebDataSource : NSObject {
@private
	WebDataSourcePrivate *_private;	// 4 = 0x4
}
@property(assign) id dataSourceDelegate;	// G=0x302d7d05; S=0x302d7ce5; converted property
+ (id)_repTypesAllowImageTypeOmission:(BOOL)omission;	// 0x302b40f1
+ (Class)_representationClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x302b48bd
- (id)initWithRequest:(id)request;	// 0x302d8ad1
- (id)_URL;	// 0x302d93cd
- (void)_addSubframeArchives:(id)archives;	// 0x302d8cb1
- (id)_documentFragmentWithArchive:(id)archive;	// 0x302d9161
- (id)_documentFragmentWithImageResource:(id)imageResource;	// 0x302d7df1
- (DocumentLoader *)_documentLoader;	// 0x302a4eb1
- (void)_finishedLoading;	// 0x302a4f3d
- (id)_imageElementWithImageResource:(id)imageResource;	// 0x302d7e59
- (id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>)documentLoader;	// 0x302a3ae5
- (BOOL)_isDocumentHTML;	// 0x302a5199
- (id)_mainDocumentError;	// 0x302d8c8d
- (void)_makeRepresentation;	// 0x302b4741
- (void)_receivedData:(id)data;	// 0x302b6afd
- (void)_replaceSelectionWithArchive:(id)archive selectReplacement:(BOOL)replacement;	// 0x302d7da1
- (id)_responseMIMEType;	// 0x302a479d
- (void)_revertToProvisionalState;	// 0x302d7d8d
- (void)_setAllowToBeMemoryMapped;	// 0x302d8f9d
- (void)_setDeferMainResourceDataLoad:(BOOL)load;	// 0x302d7d25
- (void)_setMainDocumentError:(id)error;	// 0x302c4491
- (void)_setOverrideTextEncodingName:(id)name;	// 0x302d8e4d
- (void)_setRepresentation:(id)representation;	// 0x302b495d
- (BOOL)_transferApplicationCache:(id)cache;	// 0x302d8d21
- (id)_webView;	// 0x302a8a31
- (void)addSubresource:(id)subresource;	// 0x302d7f85
- (id)data;	// 0x302d8929
// converted property getter: - (id)dataSourceDelegate;	// 0x302d7d05
- (void)dealloc;	// 0x302b6671
- (void)finalize;	// 0x302d8a71
- (id)initialRequest;	// 0x302b7399
- (BOOL)isLoading;	// 0x302d889d
- (id)mainResource;	// 0x302d8569
- (id)pageTitle;	// 0x302a4ed1
- (id)representation;	// 0x302a4ef9
- (id)request;	// 0x302b04a9
- (id)response;	// 0x302a47c5
// converted property setter: - (void)setDataSourceDelegate:(id)delegate;	// 0x302d7ce5
- (id)subresourceForURL:(id)url;	// 0x302d80ad
- (id)subresources;	// 0x302d8329
- (id)textEncodingName;	// 0x302d88c5
- (id)unreachableURL;	// 0x302b0591
- (id)webArchive;	// 0x302d8721
- (id)webFrame;	// 0x302a3bcd
@end

