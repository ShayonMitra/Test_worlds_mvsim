import glob
import os
import sys

try:
    from setuptools import setup, find_packages
except ImportError:
    from distutils.core import setup, find_packages

packages = find_packages(where=".")
print("PACKAGES: ", packages)

package_data = {
    '': [
        './*.so',
        './*.dll',
    ]
}

# Cleaner to read in the contents rather than copy them over.
readme_contents = open("/home/swaminathan/catkin_ws/src/mvsim/README.md").read()

# Solves the problem of "setup.py install" complaining on being installed into
# a non-standard location during generation of Debian packages:
python_install_dir="/usr/local"
sys.path.insert(0, python_install_dir)

setup(
    name='mvsim',
    description='Multivehicle Simulator',
    url='https://github.com/MRPT/mvsim',
    version='0.11.2',  # https://www.python.org/dev/peps/pep-0440/
    author='Jose Luis Blanco Claraco',
    author_email='jlblanco@ual.es',
    license='Simplified BSD license',
    keywords='robotics',
    long_description_content_type='text/markdown',
    long_description=readme_contents,
    # https://pypi.org/pypi?%3Aaction=list_classifiers
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Education',
        'Intended Audience :: Developers',
        'Intended Audience :: Science/Research',
        'Operating System :: MacOS',
        'Operating System :: Microsoft :: Windows',
        'Operating System :: POSIX',
        'License :: OSI Approved :: BSD License',
        'Programming Language :: Python :: 3',
    ],
    packages=packages,
    package_data=package_data,
    #test_suite="mvsim.tests",
    #install_requires=["numpy"],
    zip_safe=False,
)
