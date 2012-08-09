/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQUProgressiveHelper;

@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle> {
	GQUProgressiveHelper *mHelper;	// 4 = 0x4
	CFDictionaryRef mQuickLookProperties;	// 8 = 0x8
	CFDictionaryRef mAttachmentsURLs;	// 12 = 0xc
	CFDictionaryRef mComputedAttachments;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
	CFStringRef mUriScheme;	// 24 = 0x18
	BOOL mPreviewStarted;	// 28 = 0x1c
}
- (id)initWithHandler:(id)handler;	// 0x35849e49
- (BOOL)appendData:(CFDataRef)data mimeType:(CFStringRef)type resourceName:(CFStringRef)name;	// 0x3584a0b9
- (void)closeAttachment:(CFStringRef)attachment;	// 0x3584a571
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x3584a069
- (void)dealloc;	// 0x35849f99
- (CFURLRef)getAttachmentURL:(CFStringRef)url mimeType:(CFStringRef)type;	// 0x3584a5b1
- (void)setCurrentSheetUri:(CFStringRef)uri;	// 0x3584a6c9
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x3584a10d
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x3584a08d
- (void)setDocumentSize:(CGSize)size;	// 0x3584a295
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x3584a32d
- (void)startProgressiveData;	// 0x3584a349
@end
