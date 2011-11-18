/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


__attribute__((visibility("hidden")))
@interface EBReader : OCBReader {
@private
	XlObjectFactory *mXlObjectFactory;	// 16 = 0x10
}
+ (BOOL)isCSV;	// 0x30cb93a1
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x30e3bdad
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x30e3b7f1
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x30cb3d35
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x30cb3d69
+ (id)readerWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x30cb8e25
- (id)initWithXlReader:(XlChartBinaryReader *)xlReader xlObjectFactory:(XlObjectFactory *)factory;	// 0x30cb8e75
- (void)dealloc;	// 0x30cf3dd1
- (bool)isCSV;	// 0x30cb936d
- (id)readWorkbookFrom:(XlChartBinaryReader *)from fileName:(id)name cancel:(id)cancel tracing:(id)tracing temporaryDirectory:(id)directory asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x30cb8ec5
@end

