/**
* Created by Fredia Huya-Kouadio.
*/

#include <core/GodotGlobal.hpp>
#include <gen/ARVRServer.hpp>
#include <arcore_interface.h>
#include <core/Godot.hpp>
#include "godot_arcore.h"

void GDN_EXPORT godot_arcore_gdnative_init(godot_gdnative_init_options *options) {
  godot::Godot::gdnative_init(options);
}

void GDN_EXPORT godot_arcore_gdnative_singleton() {
  godot::ARVRServer::get_singleton()->add_interface(ARCoreInterface::get_singleton_instance());
}

void GDN_EXPORT godot_arcore_nativescript_init(void *handle) {
  godot::Godot::nativescript_init(handle);

  godot::register_class<ARCoreInterface>();
}

void GDN_EXPORT godot_arcore_nativescript_terminate(void *handle) {
  godot::Godot::nativescript_terminate(handle);
}

void GDN_EXPORT godot_arcore_gdnative_terminate(godot_gdnative_terminate_options *options) {
  godot::Godot::gdnative_terminate(options);
}