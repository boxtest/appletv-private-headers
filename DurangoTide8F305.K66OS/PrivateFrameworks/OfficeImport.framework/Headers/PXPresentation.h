/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXPresentation : NSObject {
}
+ (id)readFromArchive:(id)archive asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x345ce1dd
+ (id)readFromData:(id)data asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x345ce055
+ (id)readFromPackage:(id)package fileName:(id)name reader:(id)reader cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x345263f1
+ (void)readPresentationProperties:(id)properties to:(id)to;	// 0x34527255
+ (CGSize)readSizeFromChildOfElement:(xmlNode *)element childName:(const char *)name;	// 0x345271b9
+ (void)readSlideIndicesWithPresentationPart:(id)presentationPart presentationState:(id)state;	// 0x3452733d
@end
