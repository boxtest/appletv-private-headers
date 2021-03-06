/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSURL.h> // Unknown library


@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x324a883d
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x324a8fbd
- (id)URLByAppendingPathComponent:(id)component;	// 0x324a8f1d
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x324a9e41
- (id)URLByAppendingPathExtension:(id)extension;	// 0x324a9efd
- (id)URLByDeletingLastPathComponent;	// 0x324a9ed1
- (id)URLByDeletingPathExtension;	// 0x324a91c5
- (id)URLByResolvingSymlinksInPath;	// 0x324a8841
- (id)URLByStandardizingPath;	// 0x324a88b1
- (id)lastPathComponent;	// 0x324a8921
- (id)pathComponents;	// 0x324a8945
- (id)pathExtension;	// 0x3244cddd
@end

@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x32423d85
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x32423d9d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32423ddd
+ (id)fileURLWithPath:(id)path;	// 0x32439111
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x3243d9a9
- (id)init;	// 0x324a9119
- (id)initFileURLWithPath:(id)path;	// 0x32439149
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x3242ade5
- (id)initWithCoder:(id)coder;	// 0x324a8b01
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x324a95dd
- (id)initWithString:(id)string;	// 0x32438fed
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x32423e29
- (unsigned long)_cfTypeID;	// 0x324a8f11
- (CFURLRef)_cfurl;	// 0x324174dd
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x324a9561
- (void)_freeClients;	// 0x324a909d
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x324a8da9
- (BOOL)_isAbsolute;	// 0x32449c81
- (id)_relativeURLPath;	// 0x324a95b1
- (id)absoluteString;	// 0x32443041
- (id)absoluteURL;	// 0x32440711
- (id)baseURL;	// 0x32448e6d
- (id)copyWithZone:(NSZone *)zone;	// 0x324392f5
- (void)dealloc;	// 0x324a8e0d
- (id)description;	// 0x32448df1
- (void)encodeWithCoder:(id)coder;	// 0x324a8bf1
- (void)finalize;	// 0x324a90d1
- (id)fragment;	// 0x3244cc79
- (unsigned)hash;	// 0x324a9161
- (id)host;	// 0x32427c99
- (BOOL)isEqual:(id)equal;	// 0x32440c71
- (BOOL)isFileURL;	// 0x3242af79
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32440cd1
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x324a8e71
- (id)parameterString;	// 0x324a9a21
- (id)password;	// 0x324a9949
- (id)path;	// 0x3241749d
- (id)port;	// 0x3244e4ed
- (id)query;	// 0x3243056d
- (id)relativePath;	// 0x324a99f1
- (id)relativeString;	// 0x32448e85
- (oneway void)release;	// 0x324248e5
- (id)resourceSpecifier;	// 0x32449b2d
- (id)retain;	// 0x32428005
- (unsigned)retainCount;	// 0x324a8ed1
- (id)scheme;	// 0x32427f4d
- (id)standardizedURL;	// 0x324a979d
- (id)user;	// 0x3244e4c1
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x324b2a89
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x324b2449
- (id)_URLByEscapingSpacesAndControlChars;	// 0x324b29b5
- (id)_hostString;	// 0x324b322d
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x324b288d
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x324b3065
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x324b310d
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x324b2775
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x324b24fd
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x324b2b4d
- (BOOL)_web_isJavaScriptURL;	// 0x324b2489
- (id)_web_scriptIfJavaScriptURL;	// 0x324b24ad
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x324b251d
@end

